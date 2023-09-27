//	created : 16/03/13
// 	author   : Rp7rf
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <set>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define INF 1e9
static const int N = 100;

int main(void){
	int n, p[N+1], m[N+1][N+1];
	cin>>n;
	rep(i,n+1){
		cin>>p[i]>>p[i+1];
	}
	
    loop(i,1,n+2)m[i][i] = 0;
 
    loop(l,2,n+1){
        loop(i,1,n-l+2){
            int j = i + l - 1;
            m[i][j] = (1<<21);
            loop(k,i,j){
                m[i][j] = min(m[i][j],m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]);
            }
        }
    }
	cout<<m[1][n]<<endl;
}