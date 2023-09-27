#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int func(int);
int count(void);

int a[10][10000],r,c;

int main(void){
  
  while(cin >> r >> c,r|c){
    for(int i=0;i<r;i++)
      for(int j=0;j<c;j++)
	cin >> a[i][j];
    
    cout << func(0) << endl;
  }
  
  return 0;
}

int func(int x){
  int res=0;

  if(x+1<r)res=func(x+1);
  res=max(res,count());

  for(int i=0;i<c;i++)
    a[x][i]= a[x][i]?0:1;
  if(x+1<r)res=max(res,func(x+1));

  return res;
}

int count(void){
  int cnt,res=0;
  
  for(int i=0;i<c;i++){
    cnt=0;
    for(int j=0;j<r;j++){
      cnt+=a[j][i];
    }
    res+=max(r-cnt,cnt);
  }
  return res;
}