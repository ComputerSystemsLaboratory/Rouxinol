#include <iostream>
#include <string>
using namespace std;

int main(){
 bool x[30];
 for(int z=0;z<30;z++){
	 x[z]=false;
 }
 int a;
 for(int i=0;i<28;i++){
	 cin>>a;
	 x[a-1]=true;
 }
 for(int j=0;j<30;j++){
	 if(x[j]==false)cout<<j+1<<endl;
	 }
 return 0;
 }

