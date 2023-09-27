#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
#include <map>
#define INF 1000000000
#define rep(i,n) for(int i =0;i<n;i++)
using namespace std;
typedef long long int ll;


int main(){
    int n,m;
    cin >> n;
    map<string, int> u;
    rep(i, n){
        string a;
        cin >> a;
        u[a]=1;
    }
    cin >> m;
    bool open=false;
    rep(i, m){
        string a;
        cin >> a;
        if (u[a]==1) {
            if (open) {
                open = false;
                cout << "Closed by "<<a<<endl;
            }else{
                open = true;
                cout << "Opened by "<<a<<endl;
            }
            continue;
        }else{
            cout << "Unknown "<<a<<endl;
        }
    }
}