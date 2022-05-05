//
// Created by Rakan on 2022/5/5.
//
#include <iostream>
#include <stack>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    stack<int> idx;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '(') idx.push(i);

        if (a[i] == ')') {
            if (idx.empty()) {
                cout<<"rightmore"<<' '<<i;
                return 0;
            }
            idx.pop();
        }
    }
    if(idx.empty()) cout<<"ok";
    else{
        cout<<"leftmore"<<' ';
        while(!idx.empty()){
            cout<<idx.top()<<' ';
            idx.pop();
        }
    }
    return 0;
}
