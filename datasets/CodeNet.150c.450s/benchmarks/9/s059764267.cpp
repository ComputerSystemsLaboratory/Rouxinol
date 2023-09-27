#include<iostream>
#include<string>
using namespace std;

int main(){
	int h,i,m,tmp;
	;
	string A,B,S;

	for(;;){
	cin>>S;
	if(S == "-")
		break;

	cin>>m;
	for(i = 0;i < m;i++){
		cin>>h;

		A = S.substr(0,h);
		B = S.substr(h);
		S = B;
		S += A;
	}
	cout<<S<<endl;
}
return 0;
}