#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int card[200]={};


int solve(int n,int k){
    int maxi=-1;
    
    int now=1;
    rep(i,k){
        now*=card[i];
    }
    for(int i=1;i<n-k+1;i++){
        now=now/card[i-1]*card[i+k-1];

        maxi=max(maxi,now);
    }
    return maxi;
}

int main() {
    int n,m,p;
    
    while(cin>>n>>m>>p){
        if(n==0 && m==0 && p==0)break;
        
        int sum=0;
        int num[200]={};
        rep(i,n){
            cin>>num[i];
            sum+=num[i];
        }
        if(num[m-1]!=0)
            cout<<(int)((double)sum*(100-p)/num[m-1])<<endl;
        else
            cout<<"0"<<endl;
    }
    
    return 0;
}