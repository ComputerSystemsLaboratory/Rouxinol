#include<iostream>
#define N 10000 
using namespace std;
int main(){
  int a[N],b[N],n,scoreA,scoreB;
  while(cin >> n,n != 0){
   
    scoreA = 0; scoreB =0;
  for(int i = 0;i < n;i++){
    cin >> a[i] >> b[i];
  }
  for(int i = 0;i < n;i++){
    if(a[i] > b[i]){
      scoreA += a[i]+b[i];
    } else if(a[i] < b[i]){
      scoreB += a[i]+b[i];
    } else if(a[i]==b[i]){
      scoreA = scoreA + a[i]; scoreB += b[i];
    }
  }
   
  cout << scoreA <<" " << scoreB << endl;
  }
 
}