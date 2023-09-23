#include<iostream>
using namespace std;

int main(){
	int example=0;
	int top3[3]={0};

	for(int i=0; i<10 ; i++){
	cin>>example;
	for(int ia=0 ; ia<3 ; ia++){
		if(top3[ia]<=example){
			for(int ib=0 ; ib<(2-ia) ; ib++){
				top3[2-ib] = top3[1-ib];
			}
			top3[ia] = example;
			break;
		}
	}
	}
	
	for(int i=0 ; i<3 ; i++){
	cout << top3[i] << endl;
	}

	return 0;
}