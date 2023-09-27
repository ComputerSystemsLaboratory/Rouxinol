#include<iostream>
using namespace std;
int main(){
	int number,cardnumber,count,S[13] = {0},H[13] = {0},C[13] = {0},D[13] = {0};
	char mark;
	cin>>number;
	for(count=0;count<number;count++){
		cin>>mark>>cardnumber;
		if(mark=='S'){
			S[cardnumber-1]=1;
		}
		if(mark=='H'){
			H[cardnumber-1]=1;
		}
		if(mark=='C'){
			C[cardnumber-1]=1;
		}
		if(mark=='D'){
			D[cardnumber-1]=1;
		}
	}
	for(count=0;count<13;count++){
		if(S[count]!=1){
			cout<<"S "<<count+1<<endl;
		}
	}
	for(count=0;count<13;count++){
		if(H[count]!=1){
			cout<<"H "<<count+1<<endl;
		}
	}
	for(count=0;count<13;count++){
		if(C[count]!=1){
			cout<<"C "<<count+1<<endl;
		}
	}
	for(count=0;count<13;count++){
		if(D[count]!=1){
			cout<<"D "<<count+1<<endl;
		}
	}
	return 0;
}