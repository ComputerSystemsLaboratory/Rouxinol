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
    int a,b;
    cin >> a >> b;
    if(a < b){
        cout << "a < b" << endl;
    }else if(a > b){
        cout << "a > b" << endl;
    }else{
        cout << "a == b" << endl;
    }
}
