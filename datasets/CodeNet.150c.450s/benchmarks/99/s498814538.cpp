#include<bits/stdc++.h>
using namespace std;
int mcxi_to_dec(string mcxi){

  int num=0;
  int n=1;
  bool check;
  
  for(int i=0 ; i < mcxi.size() ; i++){
    check=false;
    if(mcxi[i] >= '2' && mcxi[i] <= '9'){
      n=mcxi[i]-48;
      check=true;
    }
    
    if(mcxi[i] == 'm'){
      num+=n*1000;
    }else if(mcxi[i] == 'c'){
      num+=n*100;
    }else if(mcxi[i] == 'x'){
      num+=n*10;
    }else if(mcxi[i] == 'i'){
      num+=n;
    }
    
    if(!check){
      n=1;
    }
  }
 
  return num;
}
void output(int sum){
  
  int n[4];
  
  n[0]=sum/1000;
  sum%=1000;
  n[1]=sum/100;
  sum%=100;
  n[2]=sum/10;
  n[3]=sum%10;
  
  for(int i=0 ; i < 4 ; i++){
    if(n[i] == 0)continue;
    if(n[i] != 1)cout <<n[i];
    switch(i){
    case 0:
      cout <<"m";
      break;
    case 1:
      cout <<"c";
      break;
    case 2:
      cout <<"x";
      break;
    case 3:
      cout <<"i";
      break;
    }
  }
  
  cout <<endl;
  
}
int main(){

  int n,sum;
  string mcxi1,mcxi2;

  cin >>n;
  
  for(int i=0 ; i < n ; i++){
    cin >>mcxi1>>mcxi2;
    sum=mcxi_to_dec(mcxi1)+mcxi_to_dec(mcxi2);
    output(sum);
  }

}