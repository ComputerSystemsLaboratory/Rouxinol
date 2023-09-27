#include<iostream>
#include<cmath>
#include<vector>
#include<string>
typedef unsigned long long ull;
#define rep(i,a) for(int i=0;i<a;i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const double eps = 1e-10;
const double pi = acos(-1);
const double inf = (int)1e8;

void solve(){
  int N,P;
  while(cin>>N>>P,N+P){
    int to=0;
    int w=P;
    vector<int> in(N);
    while(true){
      if(w){
	w--;
	in[to]++;
      }else{
	w+=in[to];
	in[to]=0;
      }      
      if(in[to]==P)break;
      to++;
      if(to==N)to=0;
    }						
    cout<<to<<endl;
  }
}

int main(void){
  solve();
  return 0;
}