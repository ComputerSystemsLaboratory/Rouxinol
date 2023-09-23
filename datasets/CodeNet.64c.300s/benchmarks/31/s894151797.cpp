#include <iostream>

using namespace std;
bool kadai[31];
int i,n;
int main(){
	for(int j=1;j<=30;j++){
		kadai[i]=false;
	}
	i=0;
	while(i!=28){
		cin >>n;
		kadai[n]=true;
		i++;
	}
	for(int j=1;j<=30;j++){
		if(!kadai[j])cout << j<<endl;
	}
	return 0;
}