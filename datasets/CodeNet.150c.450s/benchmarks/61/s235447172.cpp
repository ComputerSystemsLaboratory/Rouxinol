#include<bits/stdc++.h>
using namespace std;





int main(){
 while(1){


    
  int n,a,b,c,x,count=0;
  cin>>n>>a>>b>>c>>x;
  if(n==0 && a==0 && b==0 && c==0 && x==0){break;}
  int y[110];
  for(int i=0;i<n;i++){
    cin>>y[i];
  }

  for(int i=0;i<n;i++){
    while(x!=y[i]){
      x=(a*x+b)%c;
      count++;
      if(count>10000){break;}
    }
     x=(a*x+b)%c;
     count++;
    if(count>10001){break;}
  }

  
  if(count<=10001){
    cout<<count-1<<endl;
  }
  else{cout<<"-1"<<endl;}




  }






  
  return 0;
}

