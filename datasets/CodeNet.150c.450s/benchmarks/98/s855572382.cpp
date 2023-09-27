#include<iostream>
using namespace std;

int main(){
 
  while(1){
    int i,j,n,m,taro[101]={0},hanako[101]={0},taro_total=0,hanako_total=0,min=1000;
    int taro_change,hanako_change;
    cin >> n >> m;
    if(n==0 && m==0)break;

    for( i  = 1; i <=n; i++){
      cin >> taro[i];
      taro_total+=taro[i];
    }

    for( i = 1; i <=m; i++){
      cin >> hanako[i];
      hanako_total+=hanako[i];
    }

  


    for( i = 1; i <=n; i++){
      for( j = 1; j <=m; j++){
	if(taro_total-taro[i]+hanako[j]==hanako_total-hanako[j]+taro[i]){
	  if(min > taro[i]+hanako[j]){
	    min = taro[i]+hanako[j];
	    taro_change = taro[i];
	    hanako_change = hanako[j];
	  }
	}
      }
    }
  
    if(min==1000){
      cout << -1 << endl;
    }else{
      cout << taro_change << " " << hanako_change << endl;;
    }
  }
  return 0;
}