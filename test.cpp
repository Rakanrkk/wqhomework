#include <iostream>
#include <vector>

using namespace std;

class vector1 {
private:
    string name;
    int grade;
public:
    friend istream &operator>>(istream &in, vector1 &a) {
        in >> a.name;
        in >> a.grade;
        return in;
    }

    friend ostream &operator<<(ostream &out, const vector1 &a) {
        return out << a.name << " " << a.grade;
    }

    vector1 operator=(const vector1 &a) {
        name = a.name;
        grade = a.grade;
    }
};

int main() {
//    int n;
//    cin>>n;
//    vector1 a[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=n-1;j>i;j++)
//        {
//            if(a[j].grade>a[j-1].grade)
//            {
//                vector tmp;
//                tmp=a[j-1];
//                a[j-1]=a[j];
//                a[j]=tmp;
//            }
//        }
//    }
//    for(int m=0;m<n;m++)
//    {
//        cout<<a[m];
//        cout<<endl;
//    }
//    cout<<endl;
    return 0;
}
