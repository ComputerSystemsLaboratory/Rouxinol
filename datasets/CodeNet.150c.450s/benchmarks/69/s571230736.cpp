#include<bits/stdc++.h>
using namespace std;
int main(){

  int a,b,n,m,flag;
  
  cin >> m;
  for(int j=0;j<m;j++){
    a = b = flag = 0;
    for(int i=0;i<10;i++){
      
      cin >> n;
      
      if(a<n&&b>n) a=n;
      else if(a>n&&b<n) b=n;
      
      else if(a<n&&b<n){
	if( (a>b)? a=n:b=n);
      }
      else flag++;
      
    }
    printf("%s\n",(flag==0)? "YES":"NO");
  }

  return (0);
}