#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
#include<cstring>
#include<set>
#include<map>
#include<vector>
#include<cmath>
#include<queue>
#include<cstdio>
#include<cstdlib>
#define reep(n1,n2,n3) for(int n1=n3;n1<n2;n1++)
#define rep(n1,n2) reep(n1,n2,0)
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define INF 1e9
using namespace std;
typedef long long int lint;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<pair<int,int> > vp;
typedef pair<int,int> pi;
typedef pair<int,pair<int,int> > pii;
typedef vector<string> vs;
const double PI  = acos(-1.0);
bool flg[30];
int main(){
    rep(i,28){
        int a;
        cin>>a;
        flg[a-1]=true;
    }
    rep(i,30){
        if(!flg[i])cout<<i+1<<endl;
    }
}