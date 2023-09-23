#include<iostream>
using namespace std;
int main(){
  int count[100];
  int b;
  int ans[100];
  int ans2[100];
  int ans3;
  ans3 = 0;
  for(int i=0;i<100;i++){
    ans[i] = 0;
    ans2[i] = 0;
    count[i] = 0;
  } 
  while(cin>>b) count[b-1]++;
  for(int i=0;i<100;i++){
    if(ans[ans3]<count[i]){
      ans[i] = count[i];
      ans2[i] = i + 1;
      ans3 = i;
      for(int k=0;k<100;k++) if(k!=i) ans2[k] = 0;    
    }
    else if(ans[ans3]==count[i]&&ans3!=0) ans2[i] = i + 1;
  }
  for(int i=0;i<100;i++) if(ans2[i]!=0) cout << ans2[i] << endl;
  return 0;
}