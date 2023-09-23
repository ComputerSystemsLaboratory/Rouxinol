#include<iostream>
using namespace std;

int main(){
	int n;
	while(1){
		cin>>n;
		if(!n)break;
		int rest=1000-n;
		int fihu=rest/500;
		int hun=(rest-fihu*500)/100;
		int fif=(rest-fihu*500-hun*100)/50;
		int ten=(rest-fihu*500-hun*100-fif*50)/10;
		int five=(rest-fihu*500-hun*100-fif*50-ten*10)/5;
		int one=rest%5;
		cout<<fihu+hun+fif+ten+five+one<<endl;
	}
	return 0;
}