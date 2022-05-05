//
// Created by Rakan on 2022/5/5.
//

#include <iostream>

using namespace std;

int main() {
    string a;
    getline(cin,a);
    int tmp = 0, max = 0;
    for (auto c: a) {
        if (c=='(') tmp++;
        if (c==')') tmp--;
        if(tmp>max) max = tmp;
    }
    cout << max << endl;
    return 0;
}