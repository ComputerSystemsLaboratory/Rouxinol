#include<iostream>
using namespace std;

int main(){
	string T_card,H_card;
	int n;
	int T_val=0,H_val=0;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>T_card>>H_card;
		if(T_card > H_card){
			T_val+=3;
		}
		else if(H_card > T_card){
			H_val+=3;
		}
		else if(T_card == H_card){
			T_val+=1;
			H_val+=1;
		}
	}
	cout<<T_val<<" "<<H_val<<endl;
	return 0;
}