#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stdio.h>
#include<queue>
#include <climits>
const int mod = 1e9 + 7;
const int INF = 1e9;
using namespace std;
typedef long long ll;

int main()
{
    vector<int> a;
    for(int i = 0; i < 3; i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < 3; i++){
        cout << a[i];
        if(i < 2){
            cout << ' ';
        }
    }
    cout << endl;
}

