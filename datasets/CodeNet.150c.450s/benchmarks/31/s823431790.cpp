#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


#include <stdio.h>
int main()
{
    long long int r[200001]={0}, i, j, n, max=-1000000000, c,prev;
    prev = 1000000001;
    scanf("%lld", &n);
    for(i = 0; i < n; i++){
        scanf("%lld", &r[i]);
    }
    for(i = 0; i < n; i++){
    	if (prev <= r[i]) continue;
        for(j = i + 1; j < n; j++){
            c = r[j] - r[i];
            if(c > max){
                max = c;
            }
        }
        prev = r[i];
    }
    printf("%lld\n", max);
    return 0;
}