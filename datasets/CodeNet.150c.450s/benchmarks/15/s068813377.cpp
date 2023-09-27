#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int main() {
    int countN, n[10000], countQ, t[10000];

    cin >> countN;
    for (int i = 0; i < countN; i++) {
        cin >> n[i];
    }

    cin >> countQ;
    for (int i = 0; i < countQ; i++) {
        cin >> t[i];
    }

    int match = 0;
    for (int i = 0; i < countQ; i++) {
        n[countN] = t[i];
        int key = 0;
        while (n[key] != t[i]) key++;
        if (key != countN) match++;
    }

    cout << match << endl;

    /***
    int match = 0;
    for (int i = 0; i < countN; i++) {
        for (int j = 0; j < countQ; j++) {
            if (n[i] == t[j]) {
            cout << n[i] << " " << t[j] << endl;
                match++;
                break;
            }
        }
    }

    cout << match << endl;
    ****/

}