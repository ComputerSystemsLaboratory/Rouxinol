#include <iostream>

using namespace std;

int max(int a,int b){
  if (a>b)
    return a;
  else
    return b;
}
int min(int a,int b){
  if (a>b)
    return b;
  else
    return a;
}

int main(){
  int r,c;
  int p2[11];
  p2[0] = 1;
  for(int i=0;i<10;i++){
    p2[i+1] = p2[i]*2;
  }
  
  while(true){
  cin >> r >> c;
  if (r==0&&c==0)
    break;
  int sen[c];
  int cc;
  for(int i=0;i<c;i++)
    sen[i] = 0;

  for(int j=0;j<r;j++){
    for(int i=0;i<c;i++){
      cin >> cc;
      sen[i] *= 2;
      sen[i] += cc;
    }
  }
  
  int s,n,sum = 0,smax = 0;
  for(int i=0;i<p2[r];i++){
    sum = 0;
    for(int j=0;j<c;j++){
      s = sen[j]^i;
      n=0;
      for(;s>0;n+=s%2,s/=2);
      sum += max(n,r-n);
    }
    if (sum>smax)
      smax = sum;
  }
  cout << smax << endl;
  }
  return 0;
}