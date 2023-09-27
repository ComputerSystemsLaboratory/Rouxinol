#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
const int INF=1e9;
int main(){
      string a[100],b[100];
      int n;
      map<string,int>M;
      cin>>n;
      REP(i,n){
            cin>>a[i];
            b[i]=a[i];
            M[a[i]]=i;
      }
      REP(i,n){
            for(int j=n-1;j>i;j--){
                  if(a[j][1]<a[j-1][1])swap(a[j],a[j-1]);
            }
      }
      bool ans=true;
      REP(i,n){
            cout<<a[i];
            if(i==n-1)cout<<endl;
            else cout<<" ";
      }
      REP(i,n-1){
            if(a[i][1]==a[i+1][1]&&M[a[i]]>M[a[i+1]])ans=false;
      }
      if(ans)cout<<"Stable"<<endl;
      else cout<<"Not stable"<<endl;
      REP(i,n-1){
            int minj=i;
            for(int j=i;j<n;j++){
                  if(b[j][1]<b[minj][1])minj=j;
            }
            swap(b[i],b[minj]);
      }
      ans=true;
      REP(i,n-1){
            if(b[i][1]==b[i+1][1]&&M[b[i]]>M[b[i+1]])ans=false;
      }
      REP(i,n){
            cout<<b[i];
            if(i==n-1)cout<<endl;
            else cout<<" ";
      }
      if(ans)cout<<"Stable"<<endl;
      else cout<<"Not stable"<<endl;
}