#include <iostream>
using namespace std;
int trib(int a){
	if(a==1){return 1;}
	if(a==2){return 2;}
	if(a==0){return 1;}
//	if(a==3){return }
	return trib(a-3)+trib(a-2)+trib(a-1);
}
int main() {
	// your code goes here
int a;
while(true){
	cin>>a;
	if(a==0){return 0;}
cout<<((trib(a)+1)/10+1)/365+1<<endl;
	
}
	return 0;
}
