#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M, cnt1, cnt2;
  cnt1=0;
  cnt2=0;
  string U[256], T[256];
  
  cin>>N;
  for(int i=0;i<N;i++) cin>>U[i];

  cin>>M;
  for(int j=0;j<M;j++) cin>>T[j];      

  for(int j=0;j<M;j++){
    for(int i=0;i<N;i++){
      if(U[i] == T[j]) cnt1++;
      else cnt2++;
    }
    if(cnt2 == N) cout<<"Unknown"<<" "<<T[j]<<endl;
    if(cnt1 % 2 == 1 && cnt2 != N) cout<<"Opened by"<<" "<<T[j]<<endl;
    if(cnt1 % 2 == 0 && cnt2 != N) cout<<"Closed by"<<" "<<T[j]<<endl;
    cnt2=0;
   
  }

  return 0;
}
	  
			 

