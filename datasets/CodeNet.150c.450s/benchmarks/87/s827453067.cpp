#include<iostream>
using namespace std;
int H,t[50][6];
int main(){
  while(1){
    cin>>H;
    if(H==0)break;
    for(int i=H-1;i>=0;i--){
      for(int j=0;j<5;j++)cin>>t[i][j];
    }
    int ans=0;
    while(1){
      int tmp=ans;
      for(int i=0;i<H;i++){
	int key=t[i][0],cnt=1;
	t[i][5]=-1;
	for(int j=1;j<6;j++){
	  if(key==t[i][j])cnt++;
	  else{
	    if(cnt>=3&&key!=0)
	      for(int k=0;k<cnt;k++){
		ans+=key;
		t[i][j-k-1]=0;
	      }
	    cnt=1;
	    key=t[i][j];
	  }
	}
      }
      if(tmp==ans)break;
      for(int j=0;j<5;j++){
	int I=0;
	for(int i=0;i<H;i++){
	  if(t[i][j]==0)continue;
	  t[I][j]=t[i][j];
	  I++;
	}
	while(I<H)t[I++][j]=0;
      }
    }
    cout<<ans<<endl;
  }
}