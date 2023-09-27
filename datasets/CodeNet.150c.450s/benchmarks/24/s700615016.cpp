
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct cell{int D,P;};
bool operator<(cell a, cell b){return a.P!=b.P?a.P>b.P:a.D>b.D;};

int main()
{
  int N,M,D,P,p,i;
  vector<cell> v;
  while(cin>>N>>M,N||M){
    v.resize(N);
    for(i=0;i<N;i++){
      cin>>D>>P;
      v[i].D=D;
      v[i].P=P;
    }
    sort(v.begin(),v.end());
    for(i=0;M>0&&i<N;i++){
      while(M>0&&v[i].D>0){
	v[i].D--;
	M--;
      }
    }
    for(p=i=0;i<N;i++){
      p+=v[i].D*v[i].P;
    }
    cout<<p<<endl;
  }
}