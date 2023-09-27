#include<iostream>

using namespace std;

int main(){
  int n,c;
  int sum[1000];
  sum[0]=1;
  for(int i=1;i<1000;i++){
    sum[i]=sum[i-1]+i+1;
  }
  while (1){
    cin >> n;
    if (n==0) return 0;
    c=0;
    for (int i=2;i<=1000;i++) {//i????????£?¶?????????´??°
      if (i>=n) break;
      for(int j=1;j<=1000-j+1;j++){
        if (j>=n) break;
        if (j==1){
          if (sum[i-1]==n)c++;
        }
        else if(i+j-1<=n && sum[j+i-2]-sum[j-2]==n){
          c++;
        }
      }
    }
    cout << c << endl;
  }
}