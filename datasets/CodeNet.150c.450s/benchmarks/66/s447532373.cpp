#include<bits/stdc++.h>
using namespace std;




int main(){
  bool j=false;
  int n;
  cin>>n;
  string a[1000];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int m;
  cin>>m;
  for(int i=0;i<m;i++){
    string b;
    cin>>b;
    bool done=false;
    for(int t=0;t<n;t++){
      if(b==a[t]){
	cout<<(j==true? "Closed by ":"Opened by ")<<b<<endl;
	if(j){j=false;}
	else{j=true;}
	done=true;
	break;
      }
    }
    if(!done){cout<<"Unknown "<<b<<endl;}
  }

  
  return 0;
}

