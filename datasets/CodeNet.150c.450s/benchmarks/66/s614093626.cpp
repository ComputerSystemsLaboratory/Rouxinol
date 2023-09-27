#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
#define lpin(a,i,n) for(int i=0;i<n;i++){cin>>a[i];}
string a[300];

int main(){
  int co=0;
  int n;
  cin>>n;
  lp(i,n){
    cin>>a[i];
  }
  int m;
  cin>>m;
  lp(i,m){
    string x;
    cin>>x;
    int check=0;
    lp(j,n){
      if(a[j]==x){
	check=1;
	break;
      }
    }
    if(check==1) {
      if(co==0){
	cout<<"Opened by "<<x<<endl;
	co=1;
      }
      else if(co==1){
	cout<<"Closed by "<<x<<endl;
	co=0;
      }
    }
    else cout<<"Unknown "<<x<<endl;
  }
  return 0;
}

