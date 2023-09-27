// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <numeric>
#include <set>
#include <queue>
#include <cstdio>
using namespace std;
#define rep(i, n) for(int i=0;i<n;i++)
#define irep(i, n) for(int i=n-1;i>=0;i--)
#define lrep(i, n) for(long long i=0;i<n;i++)
typedef long long ll;
typedef vector<long long> llv;
typedef vector<vector<long long> > llvv;
#define MAX 100000

int parent(int i){return i/2;}
int left(int i){return 2*i;}
int right(int i){return 2*i+1;}

int main(){
    int H, i, A[MAX+1];
    cin >> H;
    for (int i=1;i<=H;i++) cin >> A[i];
    // rep(i,H) cout << A[i];

    for (i=1;i<=H;i++){
        cout << "node " << i << ": key = " << A[i] << ", ";
        if (parent(i) >= 1) cout << "parent key = " << A[parent(i)] << ", ";
        if (left(i) <= H) cout << "left key = " << A[left(i)] << ", ";
        if (right(i) <= H) cout << "right key = " << A[right(i)] << ", ";
        cout << endl;
    }
}
