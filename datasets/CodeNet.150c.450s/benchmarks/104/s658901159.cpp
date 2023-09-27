#include <iostream>
#include <cstdio>
#define N 30
using namespace std;
int main(){
  int w,n,tmp;
  int lod[N]; int lis[N][3];
  while(cin >> n >> w){
  for(int i = 0;i<n;i++){
    lod[i] = i+1;
  }
 
  for(int i=0;i<w;i++){
    scanf("%d,%d",&lis[i][0],&lis[i][2]);
  }
  for(int i=0;i<w;i++){
    tmp = lod[lis[i][0]-1];
    lod[lis[i][0]-1] = lod[lis[i][2]-1];
    lod[lis[i][2]-1] = tmp;
  }
  for(int i=0;i<n;i++){
    cout << lod[i] << endl;
  }
  }
}