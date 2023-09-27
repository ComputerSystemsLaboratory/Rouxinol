#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

#define NONE INT_MAX>>1
vector< vector<int> > WarshallFloyd(vector< vector<int> >A)
{
  for(int k=0;k<A.size();k++)
    for(int i=0;i<A.size();i++)
      for(int j=0;j<A.size();j++)
        A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
  return A;
}

int main()
{
  int n,N;
  int a,b,c;
  while(cin>>n,n){
    vector< vector<int> > m(10,vector<int>(10,4000));
    N=0;
    for(int i=0;i<10;i++)m[i][i]=0;
    for(int i=0;i<n;i++){
      cin>>a>>b>>c;
      m[a][b]=m[b][a]=c;
      N=max(N,max(a,b));
    }
    N++;
    m=WarshallFloyd(m);

    int ans1=0;
    int ans2=INT_MAX;
    for(int i=0;i<N;i++){
      int sum=0;
      for(int j=0;j<N;j++){
	sum+=m[i][j];
      }
      if(ans2>sum){
	ans1=i;
	ans2=sum;
      }
    }
    cout<<ans1<<" "<<ans2<<endl;
  }
}