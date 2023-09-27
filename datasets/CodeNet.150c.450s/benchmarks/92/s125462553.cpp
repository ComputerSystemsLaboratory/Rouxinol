#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
using namespace std;
typedef long long int ll;
const int INF = 100000000;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int main(){
    int a, b;
    vector <int> ans;
    while(cin >> a >> b){
        int c = a + b, count = 0;
        while(c){
            count++;
            c /= 10;
        }
        cout << count << endl;
    }
    return 0;
    
}