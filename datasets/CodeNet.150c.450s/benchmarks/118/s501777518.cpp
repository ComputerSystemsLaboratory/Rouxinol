#include<iostream>
#include<cstdio>

using namespace std;


int main(){
  int n,Y,M,D,total;
  cin >> n;
  while(n-- > 0){
    total = 0;
    cin >> Y >> M >> D;
    while(!(Y==1000 && M ==1 && D== 1)){

 	D++;
	total++;
      if(Y%3 == 0){
	if(D == 21){
	  D = 1;
	  M++;
	  if(M==11){
	    M=1;
	    Y++;
	  }
	}
      }else{
	if(M%2 == 1){
	  if(D == 21){
	    D = 1;
	    M++;
	    if(M == 11){
	      M=1;
	      Y++;
	    }
	  }
	}
	else{       
	  if(D == 20){
	    D=1;
	    M++;
	    if(M == 11){
	      M=1;
	      Y++;
	    }
	  }

	}//fin else

      }

    }
    cout <<  total << endl;
  }
  return 0;
}