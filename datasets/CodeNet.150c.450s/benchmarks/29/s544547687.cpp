#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

class MyList {
private:
    const int MAX_N = 2000000;
    int *lst = new int[MAX_N];
    int first = MAX_N - 1;
    int last = MAX_N - 1;
public:
    MyList();
    void insert(int x);
    void remove(int x);
    void deleteFirst();
    void deleteLast();
    int size();
    void print();
};

MyList::MyList() {
    REP(i,MAX_N) lst[i] = -1;
}

void MyList::insert(int x) {
    lst[first] = x;
    first--;
}

void MyList::deleteLast() {
    last--;
}

void MyList::deleteFirst() {
    first++;
}

int MyList::size() {
    return last - first;
}

void MyList::remove(int x) {
    int xpos = -1;
    for(int i = first+1; i <= last; i++) {
        if (lst[i] == x) {
            xpos = i;
            break;
        }
    }
    if (xpos == -1) return;
    else {
        for(int i = xpos; i > first+1; i--) {
            lst[i] = lst[i-1];
        }
        first++;
    }
}

void MyList::print() {
    for(int i = first+1; i < last; i++) {
        cout << lst[i] << " ";
    }
    cout << lst[last] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    MyList mylist;
    REP(i,n) {
        string s;
        cin >> s;
        if (s == "insert") {
            int k;
            cin >> k;
            mylist.insert(k);
        }else if (s == "deleteFirst") {
            mylist.deleteFirst();
        }else if (s == "deleteLast"){
            mylist.deleteLast();
        }else {
            int k;
            cin >> k;
            mylist.remove(k);
        }
        //mylist.print();
    }
    mylist.print();
    return 0;
}