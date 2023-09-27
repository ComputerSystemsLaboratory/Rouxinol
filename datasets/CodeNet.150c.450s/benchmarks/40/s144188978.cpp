#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> int_pair;
typedef pair<ll,ll> ll_pair;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
const int N=7;
int dic[N],w;
string s;
int e=0,n=0;


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  FOR(i,1,7){
  	cin>>dic[i];
  }
  cin>>s;
  FOR(i,0,s.size()){
  	if(s[i]=='E'){
  		w=dic[1];
  		dic[1]=dic[4];
  		dic[4]=dic[6];
  		dic[6]=dic[3];
  		dic[3]=w;
  	}else if(s[i]=='W'){
  		w=dic[1];
  		dic[1]=dic[3];
  		dic[3]=dic[6];
  		dic[6]=dic[4];
  		dic[4]=w;
  	}else if(s[i]=='N'){
  		w=dic[1];
  		dic[1]=dic[2];
  		dic[2]=dic[6];
  		dic[6]=dic[5];
  		dic[5]=w;
  	}else{
  		w=dic[1];
  		dic[1]=dic[5];
  		dic[5]=dic[6];
  		dic[6]=dic[2];
  		dic[2]=w;
  	}
  }
  cout<<dic[1]<<endl;
  return 0;
}

