//
// Created by Rakan on 2022/5/9.
//
#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    list<int> l;
    for (int i = 1; i <= n; i++)
        l.push_back(i);
    auto iter = l.begin();
    while (!l.empty()) {
        for (int i = 1; i < k; ++i) {
            iter++;
            if (iter == l.end()) iter = l.begin();
        }
        if (iter == l.end()) iter = l.begin();
        cout << *iter << ' ';
        iter = l.erase(iter);
        if (iter == l.end()) iter = l.begin();
    }
    return 0;
}
