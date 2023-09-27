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



int main(){
    int n;
    while(cin>>n){
        int data[100000]={};
        if(n==0)break;
        
        rep(i,n){
            char ch;
            int a,aa,aaa,b,bb,bbb;
            cin>>a>>ch>>aa>>ch>>aaa>>b>>ch>>bb>>ch>>bbb;
            data[a*60*60+aa*60+aaa]+=1;
            data[b*60*60+bb*60+bbb]-=1;
        }
        for(int i=1;i<90000;i++){
            data[i]=data[i]+data[i-1];
        }
        
        int ans=-1;
        rep(i,90000){
            ans=max(ans,data[i]);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}