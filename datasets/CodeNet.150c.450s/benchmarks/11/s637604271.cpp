#include <iostream>
#include <iomanip>
using namespace std;

void call(int n); 
int main(){

	int S[14]={0};
	int H[14]={0};
	int C[14]={0};
	int D[14]={0};
	int n=0,num=0;
	char mark;

	cin >> n;

	for(int i=0;i<n;i++){
		cin >> mark >> num;

		if(mark=='S'){
			S[num]=1;
		}else if(mark=='H'){
			H[num]=1;
		}else if(mark=='C'){
			C[num]=1;
		}else if(mark=='D'){
			D[num]=1;
		}
	}

	for(int i=1;i<14;i++){
		if(S[i]==0){
			cout << "S " << i << endl;
		}
	}
	for(int i=1;i<14;i++){
		if(H[i]==0){
			cout << "H " << i << endl;
		}
	}
	for(int i=1;i<14;i++){
		if(C[i]==0){
			cout << "C " << i << endl;
		}
	}
	for(int i=1;i<14;i++){
		if(D[i]==0){
			cout << "D " << i << endl;
		}
	}
	
	



return 0;
}