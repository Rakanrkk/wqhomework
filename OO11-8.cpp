//
// Created by Rakan on 2022/5/11.
//
#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int,int> m;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin>>tmp;
        if(m.count(tmp)) {
            m[tmp]++;
        }else{
            m[tmp]=1;
        }
    }
    for(auto i:m)
    {
        cout<<i.first<<' '<<i.second<<endl;
    }
    return 0;
}
