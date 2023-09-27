#include <bits/stdc++.h>
#include <numeric>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

static const int MAX=200000;

int main(){
    vector<int> R(MAX);
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> R.at(i);
    int maxv=-2000000000;
    int minv=R.at(0);
    for(int i=1;i<n;i++){
        maxv=max(maxv,R.at(i)-minv);
        minv=min(minv,R.at(i));
    }
    cout << maxv << endl;
    return 0;
}

