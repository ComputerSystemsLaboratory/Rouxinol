#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){

  int a,d,n;
  int count;
  
  while(1){
    count = 0;
    cin>>a>>d>>n;

    if(a == 0 && d == 0 && n == 0){
      break;
    }

    if(a == 1){
      a = a+d;
    }
    
    while(1){
      int judge = 1;
      
      if(a%2 != 0){
	for(int i = 3; i*i<=a; i += 2){
	  if(a%i == 0){
	    judge = 0;
	  }
	}
      }
      else{
	if(a == 2){
	  judge = 1;
	}
	else{
	  judge = 0;
	}
      }
      if(judge == 1){
	++count;
      }
      if(count == n){
	break;
      }
      a = a+d;
    }

    cout<<a<<endl;
  }
  return 0;

}