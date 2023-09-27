#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#include<complex>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int>PA;
using namespace std;
#define MAX  999999
int n1,s;
int counter = 0;
int dfs(int num,int c,int sum){
    if(sum == s && c == n1 && num<=10){counter++; return 0;}
    if(sum > s || c > n1 || num >9){return 0;}
    dfs(num+1,c+1,sum+num);
    dfs(num+1,c,sum);
    return 0;
}
int main(){
    while(cin >> n1 >> s,n1+s){
        counter = 0;
        dfs(0,0,0);
        cout << counter <<endl;
    }
    
}