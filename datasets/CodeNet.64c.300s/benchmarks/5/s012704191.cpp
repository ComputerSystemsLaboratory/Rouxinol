#include<iostream>
using namespace std;

int main(){
	int mountain[10], first=0, second=0, third=0;
	for(int j=0; j<10; j++){
		mountain[j]=0;
	}

	for(int i=0; i<10; i++){
		cin >> mountain[i];
		if(first <= mountain[i]){
			third = second;
			second = first;			
			first = mountain[i];
		}
		else if(mountain[i]<=first && mountain[i]>=second){
			third = second;
			second = mountain[i];
		}
		else if(mountain[i]<=second && mountain[i]>=third){
			third = mountain[i];
		}
	}
	cout << first << "\n" << second << "\n" << third << endl;

	return 0;
}