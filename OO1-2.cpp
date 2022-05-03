#include <iostream>
using namespace std;
class Time
{
public:
    Time(int h=0,int m=0,int s=0):hour(h),minute(m),second(s){this->check();}
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
        while(this->second<=0)
        {
            this->second+=60;
            this->minute-=1;
        }
        while(this->minute<=0)
        {
            this->minute+=60;
            this->hour-=1;
        }
        while(this->hour<=0)
        {
            hour+=24;
        }
    }
    Time operator+(int s) const
    {
        Time time;
        time.second=this->second+s;
        time.minute=this->minute;
        time.hour=this->hour;
        time.check();
        return time;
    }
    Time operator-(int s) const
    {
        Time time;
        time.second=this->second-s;
        time.minute=this->minute;
        time.hour=this->hour;
        time.check();
        return time;
    }
    int operator-(Time &time)
    {
        Time tmp;
        int ans=0;
        tmp.hour=this->hour-time.hour;
        tmp.minute=this->minute-time.minute;
        tmp.second=this->second-time.second;
        ans=tmp.hour*3600+tmp.minute*60+tmp.second;
        return ans;
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
    int hour;
    int minute;
    int second;
};



int main()
{
    Time t1,t2;
    cin>>t1>>t2;
    cout<<t2-t1;
    return 0;
}