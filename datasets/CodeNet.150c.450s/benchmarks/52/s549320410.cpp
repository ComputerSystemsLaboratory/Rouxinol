#include<iostream>
using namespace std;

int main(){
	int track[100];
	int x;
	int counter=0;
	int exit[100];
	int exit_number=0;
	while(cin >> x){
		if(x==0){
			counter--;
			exit[exit_number]=track[counter];
			exit_number++;
			
		}
		else{
			track[counter]=x;
			counter++;
		}
	}
	for(x=0; x<exit_number;x++){
		cout << exit[x] << endl;
	}
}
