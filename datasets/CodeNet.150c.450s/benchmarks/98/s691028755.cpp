#include<iostream>
using namespace std;

int main(){

  int n,m;
  int taro[100]={0},hana[100]={0};
  int sumt,sumh;
  int numt,numh;
  int min;

  while(cin >> n >> m){
    if(n==0 && m==0){ break; }

    sumt=sumh=0;
    min = -1;

    for(int i=0; i<n; i++){
        cin >> taro[i];
        sumt+=taro[i];
    }
    for(int i=0; i<m; i++){
        cin >> hana[i];
        sumh+=hana[i];
    }

    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        if(sumt-taro[i]+hana[j]==sumh-hana[j]+taro[i]){
          //cout << "hit" << endl;
          if(min==-1 || min>sumt-taro[i]+hana[j]){
            min = sumt-taro[i]+hana[j];
            numt=i , numh=j;
          }
        }
      }
    }

    if(min == -1){
      cout << -1 << endl;
    }
    else{
      cout << taro[numt] << ' ' << hana[numh] << endl;
    }

  }

  return 0;
}