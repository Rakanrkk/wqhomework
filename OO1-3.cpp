//
// Created by Rakan on 2022/4/14.
//
#include <iostream>

using namespace std;
class Date
{
public:
    explicit Date(int y=1970,int m=0,int d=0):year(y),month(m),day(d){}
    void set(int y,int m,int d)
    {
        year=y;
        month=m;
        day=d;
    }
    bool isleap() const
    {
        if(year%400==0)   return true;
        if(year%100!=0 && year%4==0) return true;
        return false;
    }

    int monthLen() const
    {
        if(month == 4 || month == 6 || month == 9 || month == 11)           return 30;
        if(month == 2)           return 28 + isleap();
        return 31;
    }
    void alteration(int d)
    {
        day+=d;
        while(day>monthLen())
        {
            day-=monthLen();
            month++;
            if(month>12){
                month=1;
                year++;
            }
        }
        while(day<=0)
        {
            month--;
            if(month<=0){
                month=12;
                year--;
            }
            day+=monthLen();
        }
    }
    Date operator+(int d) const {
        Date date;
        date.year=year;
        date.month=month;
        date.day=day;
        date.alteration(d);
        return date;
    }
    void operator+=(int d) {
        this->alteration(d);

    }
    friend ostream &operator<<(ostream &output,const Date &date)
    {
        output<<date.year<<' '<<date.month<<' '<<date.day;
        return output;
    }
    friend istream &operator>>(istream &input,Date &date)
    {
        input>>date.year>>date.month>>date.day;
        return input;
    }

private:
    int year;
    int month;
    int day;
};
int main()
{
    Date d;
    cin>>d;
    int n;
    cin>>n;
    d+=n;
    cout<<d;

    return 0;
}