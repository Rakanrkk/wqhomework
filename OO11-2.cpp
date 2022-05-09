//
// Created by Rakan on 2022/5/9.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int na, nb, tmp;
    cin >> na;
    for (int i = 0; i < na; ++i) {
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> nb;
    for (int i = 0; i < nb; ++i) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for (auto i: v) cout<<i<<' ';
    return 0;
}
