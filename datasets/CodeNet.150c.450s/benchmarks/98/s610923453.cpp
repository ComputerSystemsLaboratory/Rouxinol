#include<iostream>
#include<vector>

using namespace std;

int main(){

  int n,m;

  while(cin>>n>>m,n){

    int taro[100];
    int hanako[100];
    int taro_total=0;
    int hanako_total=0;
    int min=300;
    int h=10000;
    int t=10000;

    for(int i=0;i<n;++i){
      cin>>taro[i];
      taro_total+=taro[i];
    }

    for(int i=0;i<m;++i){
      cin>>hanako[i];
      hanako_total+=hanako[i];
    }

    for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
	if(taro_total-taro[i]+hanako[j]==hanako_total-hanako[j]+taro[i]){
	  if(min>taro[i]+hanako[j]){
	    t=taro[i];
	    h=hanako[j];
	    min=t+h;
	  }
	}
      }
    }
    if(h==10000 && t==10000)
      cout<<-1<<endl;
    else
      cout<<t<<' '<<h<<endl;
  }
}