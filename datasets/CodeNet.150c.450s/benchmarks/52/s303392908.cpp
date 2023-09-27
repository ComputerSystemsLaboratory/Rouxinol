#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-6;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
    int n;
    stack<int> q;
    while(cin>>n){
        if(n==0){
            cout<<q.top()<<endl;
            q.pop();
        }else{
            q.push(n);
        }
    }
}
