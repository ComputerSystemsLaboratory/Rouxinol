#include<bits/stdc++.h>
using namespace std;
int N,M;
int ax[20],ay[20];
int main(){
  while(1){
    cin>>N;
    if(N==0)break;
    for(int i=0;i<N;i++)cin>>ax[i]>>ay[i];
    cin>>M;
    int px=10,py=10,cnt=0;
    for(int i=0;i<M;i++){
      char ch;
      int num;
      cin>>ch>>num;
      for(int j=0;j<num;j++){
        if(ch=='N')py++;
        if(ch=='E')px++;
        if(ch=='S')py--;
        if(ch=='W')px--;
        for(int k=0;k<N;k++){
          if(ax[k]==px&&ay[k]==py){
            cnt++;
            ax[k]=-1;
            ay[k]=-1;
          }
        }
      }
    }
    if(cnt==N)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}