#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	int N;
	float xx,yy;
	float X[5],Y[5];
	string res[110];
	cin>>N;
	for(int j=1;j<=N;j++){
		for(int i=1;i<=4;i++){
			cin>>X[i]>>Y[i];
		}
		if((X[2]-X[1])*(Y[4]-Y[3])==(X[4]-X[3])*(Y[2]-Y[1])){
			res[j]="YES";
		}
		else{
			res[j]="NO";
		}
	}
	for(int i=1;i<=N;i++){
		cout<<res[i]<<endl;
	}
	return 0;
}