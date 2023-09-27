#include <bits/stdc++.h>
using namespace std;


long long int Exp(long long int exp_n,long long int exp_e, long long exp_mod);


int main(){
  int N, a;
  cin >>N;
  int ANS[N+1];
  for(int i=1;i<N+1;i++){
    ANS[i]=0;
  }

  for(int x=1;x<101;x++){
    for(int y=1;y<101;y++){
      for(int z=1;z<101;z++){
        a = x*x + y*y + z*z + x*y + y*z + z*x;
        if(a > N){
          break;
        }
        ANS[a]++; 
      }
    }
  }
  
  for(int i=1;i<N+1;i++){
    cout << ANS[i] << endl;
  }
}


long long int Exp(long long int exp_n,long long int exp_e, long long int exp_mod){
  long long int exp_o = 1;
  long long int exp_x=exp_n;
  long long int exp_tmp;
  
  while(0<exp_e){
    exp_tmp = exp_e/2;
    if(exp_e - exp_tmp*2 == 1){
      exp_o = exp_o*exp_x;
      if(exp_o>exp_mod){
        exp_o=exp_o%exp_mod;
      }
    }
    
    exp_x = exp_x*exp_x;
    if(exp_x>exp_mod){
      exp_x=exp_x%exp_mod;
    }
    exp_e = exp_tmp;
  }
  return exp_o;
}
