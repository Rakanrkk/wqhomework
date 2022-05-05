//
// Created by Rakan on 2022/5/5.
//
#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:

    bool operator>(const Student student) {
        return score > student.score;
    }

    bool operator<(const Student student) {
        return score < student.score;
    }

    friend ostream &operator<<(ostream &output, const Student &student) {
        output << student.name << " " << student.score;
        return output;
    }

    friend istream &operator>>(istream &input, Student &student) {
        input >> student.name >> student.score;
        return input;
    }

private:
    string name;
    int score;
};

int main() {
    int n;
    cin >> n;
    Student data[n];
    for (int i = 0; i < n; i++) cin >> data[i];
    sort(data, data + n);
    for (int i = n - 1; i >= 0; i--) cout << data[i] << endl;
    return 0;
}
