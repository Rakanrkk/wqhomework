//
// Created by Rakan on 2022/4/20.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    vector<int> data;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        data.push_back(tmp);
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        if (tmp < 0) {
            tmp = -tmp;
            auto rmit = remove(data.begin(), data.end(), tmp);
            data.erase(rmit, data.end());
        } else if (tmp > 0) {
            data.push_back(tmp);
        }
    }
    for (int i : data) {
        cout << i<< " ";
    }
    return 0;
}