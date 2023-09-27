#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <cstring>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int main(){
    string a;
    cin >> a;
    for(int i = a.length()- 1; i >= 0; --i){
        cout << a[i];
    }
    cout << endl;
    return 0;
}