//
// Created by Rakan on 2022/5/4.
//

#include <iostream>
#include <map>
#include <cmath>
using namespace std;

class Polylist {
public:

    int calculate(int x) {
        int ans=0;
        for(auto pair : m) {
            ans += pair.second * (int)pow(x, pair.first);
        }
        return ans;
    }

    friend istream &operator>>(istream &input, Polylist &polylist) {
        int n, k;
        input >> n >> k;
        polylist.m[k] += n;
        return input;
    }

    friend ostream &operator<<(ostream &output, Polylist &Polylist) {
        for (auto iter = Polylist.m.rbegin(); iter != Polylist.m.rend(); iter++) {
            if (iter->second)
                output << iter->first << " " << iter->second;
        }
        return output;
    }

private:
    map<int, int> m;
};


int main()
{
    int n;
    cin>>n;
    Polylist pl;
    for (int i = 0; i < n; i++)
    {
        cin>>pl;
    }
    int x;
    cin>>x;
    cout<<pl.calculate(x);
    return 0;
}