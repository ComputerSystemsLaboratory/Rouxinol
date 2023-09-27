#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,m,p;

  while(cin>>n>>m>>p,n||m||p){

	vector<int> x(n+1);
	int total=0;
	
	for(int i=1;i<=n;++i){
	  cin>>x[i];
	  total+=x[i];
	}

	total=total*(100-p);

	
	if(x[m]==0)
	  cout<<0<<endl;
	else
	  cout<<total/x[m]<<endl;
	
  }

}

