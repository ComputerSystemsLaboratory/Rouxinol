//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<set>

/*
#include<boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/rational.hpp>
namespace mp = boost::multiprecision;
using Real = mp::number<mp::cpp_dec_float<1024>>;
using Bint = mp::cpp_int;
*/

using namespace std;

#define int long long
#define REP(i,s,e) for((i)=(s);(i)<(e);(i)++)
#define RREP(i,s,e) for((i)=((s)-1);(i)>=(e);(i)--)
#define FOR(i,n) for((i)=(0);(i)<(n);(i)++)
#define RFOR(i,n) for((i)=((n)-1);(i)>=(0);(i)--)
#define MOD 1000000007

signed main(){
    int N,M;
    cin>>N>>M;
    vector<int> v[100010];

    for(int i=0;i<M;i++){
        int A,B;
        cin>>A>>B;
        v[A].push_back(B);
        v[B].push_back(A);
    }

    int ans[100010]={0};
    int c=1;
    ans[1]=-1;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int n=q.front();
        q.pop();
        for(int i=0;i<v[n].size();i++){
            int t=v[n][i];
            if(ans[t]==0){
                ans[t]=n;
                c++;
                q.push(t);
            }
        }
    }

    if(c==N){
        cout<<"Yes"<<endl;
        for(int i=2;i<=N;i++){
            cout<<ans[i]<<endl;
        }
    }
    else{
        cout<<"No"<<endl;
    }
}
