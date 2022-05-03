//
// Created by Rakan on 2022/4/13.
//
#include <iostream>
using namespace std;
class Time
{
public:
    Time(int h,int m,int s):hour(h),minute(m),second(s){}
    Time()= default;
    void set(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void check()
    {
        while(this->second>=60)
        {
            this->second-=60;
            this->minute+=1;
        }
        while(this->minute>=60)
        {
            this->minute-=60;
            this->hour+=1;
        }
        while(this->hour>=24)
        {
            hour-=24;
        }
    }
    Time operator+(int s)
    {
        Time time;
        time.second=this->second+s;
        time.minute=this->minute;
        time.hour=this->hour;
        time.check();
        return time;
    }
    Time operator-(int s)/////////////////////////////////////////
    {

    }
    int operator-(Time &time)
    {

    }
    friend ostream &operator<<(ostream &output,const Time &time)
    {
        output<<time.hour<<' '<<time.minute<<' '<<time.second;
        return output;
    }
    friend istream &operator>>(istream &input,Time &time)
    {
        input>>time.hour>>time.minute>>time.second;
        return input;
    }
private:
    int hour{};
    int minute{};
    int second{};
};
int main() {
    Time t;
    cin>>t;
    int s;
    cin>>s;
    t=t+s;
    cout<<t;
    return 0;
}
