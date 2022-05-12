//
// Created by Rakan on 2022/5/11.
//
#include <iostream>
#include <map>
using namespace std;

int main() {
    string s;
    map<string,int> m;

    while(cin>>s){
        if(m.count(s)) {
            m[s]++;
        }else{
            m[s]=1;
        }
    }
    for(auto& i:m)
    {
        cout<<i.first<<' '<<i.second<<endl;
    }
    return 0;
}
