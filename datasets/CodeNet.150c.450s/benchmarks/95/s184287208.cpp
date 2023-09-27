#include<iostream>
using namespace std;
int main(){

  int n;
  string in,temp;

  while(1){
    
    cin >>n;
    if(n == 0)break;

    int cnt=0;
    temp="ld";
    
    for(int i=0 ; i < n ; i++){

      cin >>in;
      
      if((temp == "ld" && in == "rd")||
	 (temp == "rd" && in == "ld")||
	 (temp == "lu" && in == "ru")||
	 (temp == "ru" && in == "lu")
	 )cnt++;
      
      temp=in;
    }
    
    cout <<cnt<<endl;
    
  }
  
  return 0;
}