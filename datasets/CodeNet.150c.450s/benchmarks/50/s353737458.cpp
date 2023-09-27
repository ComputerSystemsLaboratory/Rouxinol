#include<iostream>
using namespace std;
int main(){
  int turi;
  int hara;
  int count;
  while(1){
    count=0;
    cin>>hara;
    if(hara==0) break;
    turi=1000-hara;
    while(turi!=0){
      if(turi>=500){
	turi=turi-500;
	count++;
      }
      else if(turi>=100){
	turi=turi-100;
	count++;
      }
      else if(turi>=50){
	turi=turi-50;
	count++;
      }

      else if(turi>=10){
	turi=turi-10;
	count++;
      }
      else if(turi>=5){
	turi=turi-5;
	count++;
      }
      else if(turi>=1){
	turi=turi-1;
	count++;
      }
    }
    cout<<count<<endl;
  }
}