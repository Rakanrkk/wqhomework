//
// Created by Rakan on 2022/5/5.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> va, vb, vc;
    int na, nb, tmp;
    cin >> na;
    for (int i = 0; i < na; ++i) {
        cin >> tmp;
        va.push_back(tmp);
    }
    cin >> nb;
    for (int i = 0; i < nb; ++i) {
        cin >> tmp;
        vb.push_back(tmp);
    }
    for (auto i: va) {
        int flag=1;
        for (auto j: vb) {
            if(i==j) flag=0;
        }
        if(flag) vc.push_back(i);
    }
    for (auto i: vc) cout<<i<<' ';
    return 0;
}
