//
// Created by Rakan on 2022/5/5.
//
#include <iostream>
#include <cmath>

using namespace std;

bool ifp(int x) {
    for (int i = 2; i <= sqrt(x); ++i) {
        if(x%i==0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i < n; ++i) {
        if (ifp(i)) cout << i << ' ';
    }
    return 0;
}