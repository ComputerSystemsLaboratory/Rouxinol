#include<bits/stdc++.h>
using namespace std;

static int N=1000;

int lcs(string x,string y){
  int num[N+5][N+5];
  int ans=0;
  int leng_x=x.size();
  int leng_y=y.size();  
  
  x=' '+x;
  y=' '+y;

  for(int i=1;i<=leng_x;i++)num[i][0]=0;
  for(int i=1;i<=leng_y;i++)num[0][i]=0;
  

  for(int i=1;i<=leng_x;i++){
    for(int j=1;j<=leng_y;j++){
      if(x[i]==y[j]) num[i][j]=num[i-1][j-1]+1;
      else num[i][j]=max(num[i][j-1],num[i-1][j]);
      ans=max(ans,num[i][j]);
    }
  }
  return ans;
}

int main(){
  string s1,s2;
  int q;

  cin>>q;
  for(int i=0;i<q;i++){
    cin>>s1>>s2;
    cout<<lcs(s1,s2)<<endl;
  }

  return 0;
}