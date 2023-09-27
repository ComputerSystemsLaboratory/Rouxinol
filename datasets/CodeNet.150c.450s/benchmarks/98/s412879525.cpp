#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int pos[21][21];

int main(){
  int n,m;
  while(cin>>n>>m && n+m){
    vector<int> veca(n);
    vector<int> vecb(m);
    int suma=0;
    int sumb=0;
    for(int i=0;i<n;i++){
      cin>>veca[i];
      suma+=veca[i];
    }
    for(int i=0;i<m;i++){
      cin>>vecb[i];
      sumb+=vecb[i];
    }

    int ta=1000;
    int tb=1000;

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	int sa=suma-veca[i]+vecb[j];
	int sb=sumb-vecb[j]+veca[i];
	if(sa == sb && veca[i]+vecb[j] < ta+tb){
	  ta=veca[i];
	  tb=vecb[j];
	}
      }
    }
    if(ta ==1000){
      cout<<-1<<endl;
    }else{
      cout<<ta<<" "<<tb<<endl;
    }

  }
  return 0;
}