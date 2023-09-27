#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<climits>
using namespace std;
#define rep(i, j) for(int i = 0; i < j; i++)
#define P pair<int, int>
const int INF = INT_MAX / 2;

int main(){
    int n;
    while(cin >>n && n){
        int A = 0, B = 0;
        rep(i, n){
            int a, b; cin >>a >>b;
            if(a > b) A += a + b;
            else if(a < b) B += a + b;
            else{
                A += a;
                B += b;
            }
        }
        cout <<A <<" " <<B <<endl;
    }
    return 0;
}