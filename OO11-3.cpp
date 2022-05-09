//
// Created by Rakan on 2022/5/9.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,t;
    getline(cin,s);
    getline(cin,t);
    unsigned long long idx=0;
    int cnt=0;
    while(s.find(t,idx)<4294967295)
    {
        idx=s.find(t,idx)+t.length();
        cnt++;
    }
    cout<<cnt;
    return 0;
}
