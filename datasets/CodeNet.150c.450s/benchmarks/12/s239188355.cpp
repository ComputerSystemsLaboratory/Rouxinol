#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
#include <string>
#include <cmath>
#include <iomanip>
#include <queue>
#include <list>
#include <stack>
#include <cctype>
#include <cmath>

using namespace std;

/* typedef */

typedef long long ll;

/* constant */
const int NIL = -1;
const int INF = 1 << 30;
const int MAX = 250;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* global variables */
vector<int> H(MAX+1, 0);
int n;

/* function */
void printAns(int ind);
int parent(int ind);
int leftChild(int ind);
int rightChild(int ind);

/* main */
int main(){

    cin >> n;
    for (int  i = 1; i <= n; i++) cin >> H[i];

    for (int i = 1; i <= n; i++) {
        printAns(i);
    }

}

void printAns(int ind) {
    cout << "node " << ind << ": ";
    cout << "key = " << H[ind] << ", ";
    int p, l, r;
    p = parent(ind);
    l = leftChild(ind);
    r = rightChild(ind);
    if (p > 0)
        cout << "parent key = " << H[p] << ", ";
    if (l <= n)
        cout << "left key = " << H[l] << ", ";
    if (r <= n)
        cout << "right key = " << H[r] << ", ";
    cout << '\n';
}

int parent(int ind) {
    int p = ind / 2;
    return p;
}

int leftChild(int ind) {
    return ind * 2;
}

int rightChild(int ind) {
    return ind * 2 + 1;
}


