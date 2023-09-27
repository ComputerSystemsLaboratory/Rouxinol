#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<cmath>
//#include<>
using namespace std;

typedef long long int64;
typedef int int32;
typedef char int8;

#define rep(i,j) for(int i=0;i<j;i++)
#define repeat(i,j,k) for(i=(j),i<(k);i++)
#define repeat_eq(i,j,k) for(i=(j),i<=(k);i++)
#define rev_rep(i,j,k) for(i=(j)-1;i>=k;i--)
#define all(v) (v).begin(),(v).end()

const int INF=1<<30;//=10E10

int main()
{
  while(true){
      int n;cin>>n;
      if(n==0)break;
      vector<int> v;
      rep(i,n){
	int t;cin>>t;
	v.push_back(t);
      }
      sort(all(v));
      int ans=0;
      for(int i=1;i<v.size()-1;i++)
	ans+=v[i];
      cout<<ans/(v.size()-2)<<endl;
  }
  return 0;
}