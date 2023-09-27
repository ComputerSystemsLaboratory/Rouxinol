#include<iostream>
using namespace std;

int main(void){
     int n[100];
     int i=0;
     int d;
     while(cin >> d,!cin.eof()){
	  
	  if(d == 0){
	       cout << n[i-1] << endl;
	       i = i-1;
	  }else{
	       n[i] = d;
	       i = i+1;
	  }
//	  cout << endl;
//	  for(int i=0;i<10;i++){
//	       cout << n[i-1] << endl;
//	  }
//	  cout << endl;
     }

     return 0;
}