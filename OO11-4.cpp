//
// Created by Rakan on 2022/5/9.
//
#include <iostream>

using namespace std;

int main() {
    string s, t1, t2;
    getline(cin, s);
    getline(cin, t1);
    getline(cin, t2);
    unsigned long long idx = 0;
    //aaa aaa aa
    while (s.find(t1, idx) < 4294967295) {
        idx = s.find(t1, idx);
        s.erase(idx, t1.length());
        s.insert(idx,t2);
        idx+=t2.length();
    }
    cout<<s;
    return 0;
}
