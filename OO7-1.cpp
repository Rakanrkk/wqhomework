//
// Created by Rakan on 2022/5/11.
//
#include <iostream>

using namespace std;

class Node {
public:
    explicit Node(int d = 0) : data(d) {
        cout << "Node()" << data << endl;
    }

    ~Node() {
        cout << "~Node()" << data << endl;
    }

    int data;
    Node *next = nullptr;


};


class Linklist {

public:
    explicit Linklist() {
        cout << "LinkList()" << endl;
    }

    explicit Linklist(int n) {
        cout << "LinkList()" << endl;
        for (int i = 0; i < n; ++i) {
            int tmp;
            cin >> tmp;
            push_back(tmp);
        }
    }

    ~Linklist() {
        Node *iter = start;
        while (iter != nullptr) {
            Node *tmp = iter;
            iter = iter->next;
            delete tmp;
        }
        cout << "~LinkList()" << endl;
    }

    void push_back(int x) {
        if (start == nullptr) {
            start = new Node(x);
            last = start;
            length++;
        } else {
            last->next = new Node(x);
            last = last->next;
            length++;
        }
    }

    void append(Node *other) {
        if (start == nullptr) {
            start = other;
            last = start;
            while (last->next != nullptr) {
                last = last->next;
                length++;
            }
        } else {
            last->next = other;
            while (last->next != nullptr) {
                last = last->next;
                length++;
            }
        }
    }

    void print() {
        Node *iter = start;
        while (iter != nullptr) {
            cout << iter->data << ' ';
            iter = iter->next;
        }
        cout << endl;
    }


private:
    int length = 0;
    Node *start = nullptr;//首元节点
    Node *last = nullptr;//指向最后一个节点的指针，非空
};


int main() {
    int n;
    cin >> n;
    Linklist l(n);
    l.print();
    return 0;
}
