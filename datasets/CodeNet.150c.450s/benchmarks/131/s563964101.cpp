#include <iostream>
#include <cmath>
using namespace std;

int a[100],x[10],l,MAX[10],MIN[10],y[10],z,w;

int saidai(){
  //max
  int i,j,mae=0,tmp,t;
  tmp =0;
  for(j = 0;j < l ;j++){
    i = x[0];
    for(t = 0; t < l ;t++){
      if(i <= x[t]){
	i = x[t];
	tmp = t;
      }
    }
    x[tmp] = 0;
    MAX[j] = i;
    mae += MAX[j] * pow(10,l-j-1);
  }
  return mae;
}
int saisyou(){
  int ato,i,j,tmp,t;
  //min
  ato =0;
  tmp = 0;
  for(j = 0;j < l ;j++){
    i = y[0];
    for(t = 0; t < l ;t++){
      if(i >= y[t]){
	i = y[t];
	tmp = t;
      }
    }
    y[tmp] = 9;
    MIN[j] = i;
    ato += MIN[j] * pow(10,l-j-1);
  } 
  return ato;
} 

int main(){

  while(1){
 
    int i,j,t,b,tmp,z,sa,ansi,ansj;

    cin >> a[0] >> l;
    //終了
    if(a[0] == 0 && l == 0)
      break;

    b = pow(10,l-1);
    for(t = 0;t < l;t++){
      x[t] = a[0] / b % 10 ;
      y[t] = x[t];
      b /=10;

    }
   
    //a[i]
    for(i = 1;i < 21 ;i++){
      z = saidai();
      w = saisyou(); 
      a[i] = z - w;
      //     cout << z << " - " << w << " = " << a[i] <<endl;
      b = pow(10,l-1);
      for(t = 0;t < l;t++){
	x[t] = a[i] / b % 10 ;
	y[t] = x[t];
	b /=10;
      }
    }


  
    sa = 100;
    tmp =0;
    for(j = 0; j <= 19 ;j++){
      if(tmp ==1) break;
      for(i = j+1;i <= 20 ;i++){	
	if(a[j] == a[i]){
	  tmp = 1;
	  sa = i-j;
	  ansi = i;
	  ansj = j;
	  break;
	}
      }	   
    }
  
    cout << j-1 << " " << a[ansj] << " " << i-j+1 << endl;
 
  }
  return 0;
}

  