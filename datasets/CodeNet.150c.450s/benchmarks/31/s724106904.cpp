#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int min;
	int input;
	cin>>min;
	cin>>input;
	int maximumProfit = input - min; 
	if(min>input){
			min = input;
		}
	
	for(int i=2;i<n;i++){
		cin>>input;
		
		if( (input-min) > maximumProfit ){
			maximumProfit=input-min;
		}
		if(min>input){
			min = input;
		}
	}
	
	
	cout<<maximumProfit<<endl;
	return 0;
}