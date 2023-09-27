#include<bits/stdc++.h>
using namespace std;

int tax(int p,int t){
return p+p*t/100;
}

int main(){
  int x,y,s;
 
for(int i=0;true;i++){
  cin >> x >> y >> s;
 if(x==0){
   break;
 }
 int a=0;
for(int j=1;j<s;j++){
  for(int k=s-1;j<=k&&k<=s;k--){
 if(tax(j,x)+tax(k,x)==s){
   if(tax(j,y)+tax(k,y)>a){
   a=tax(j,y)+tax(k,y);
   }   
  } 
  }   
}


  cout << a << endl;

}
}
