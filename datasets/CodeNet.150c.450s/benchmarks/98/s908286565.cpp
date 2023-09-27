#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)

int main(void){
  int n,m;
  while(cin>>n>>m,n+m){
    int sun = 0, sum = 0;
    vector<int> in(n);
    vector<int> im(m);
    rep(i,n)cin>>in[i],sun+=in[i];
    rep(i,m)cin>>im[i],sum+=im[i];
    
    bool find = false;
    rep(i,n){
      if(find)break;
      rep(j,m){
	//cout<<in[i]<<" "<<im[j]<<endl;
	//cout<<sun+im[j]-in[i] <<" "<<sum+in[i]-im[j]<<endl;
	if(sun + im[j] - in[i] == sum + in[i] - im[j]){
	  cout<<in[i]<<" "<<im[j]<<endl;
	  find = true;
	  break;
	} 
      }
    }
    if(!find)cout<<-1<<endl;

  }
}