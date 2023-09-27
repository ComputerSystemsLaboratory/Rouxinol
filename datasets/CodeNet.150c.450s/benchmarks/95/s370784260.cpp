#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  while(cin>>n && n){
    int status=0; //0->ground ,1->on the upstair
    int left_leg=0;
    int right_leg=0;
    int count=0;
    while(n--){
      string str;
      cin>>str;
      if(str=="lu"){
	left_leg=1;
      }
      if(str=="ru"){
	right_leg=1;
      }
      if(str=="ld"){
	left_leg=0;
      }
      if(str=="rd"){
	right_leg=0;
      }
      if(status==0 && left_leg==1 && right_leg==1){
	count++;
	status=1;
      }
      if(status==1 && left_leg==0 && right_leg==0){
	count++;
	status=0;
      }

    }
    cout<<count<<endl;
  }
  return 0;
}