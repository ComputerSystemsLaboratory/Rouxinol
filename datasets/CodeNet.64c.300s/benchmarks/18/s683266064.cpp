#include<iostream>
using namespace std;

int com(int x,int y){
  long long int ans;
  if(y==0)return 1;
  if(y==1)return x;
  ans = x;
  for(int i=1;i<y;i++)ans *= x-i;
  for(int i=0;i<y;i++)ans /= y-i;
  return ans;
}

int main(){
  int n;
  int a,d,y;

  while(1){
    cin >> n;
    if(!n)break;

    a = 0;
    for(int i=0;i<=n/3;i++){
      for(int j=0;j<=(n-3*i)/2;j++){
	a += com(i+j+(n-3*i-2*j),i+j) * com(i+j,i);
      }
    }

    d = a/10;
    if(d*10 != a)d++;
    y = d/365;
    if(y*365 != d)y++;
    cout << y << endl;
  }
}