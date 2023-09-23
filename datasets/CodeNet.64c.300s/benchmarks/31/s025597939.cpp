#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
	
	//未提出者
	/*
	int A[28];
	for(int i=0; i<28; i++){
		int a;
		cin >> a;

		A[i] = a;
	}
	sort(A,A+28);
	*/

	bool X[31];
	for(int i=0; i<31; i++){
		X[i] = false;
	}

	//int p=1;
	for(int i=0; i<28; i++){
		int a;
		cin >> a;
		X[a] = true;
		/*
		for(int j=1; j<=30; j++){
			if(A[i]==j){
				break;
			}
			else if(j==30){
				cout << A[i] << endl;
			}
		}
		*/
		/*
		if(A[i] != p){
			cout << p << endl;
			p++;
		}
		p++;
		*/
	}
	//X[0] = true;
	for(int i=1; i<31; i++){
		if(!X[i]){
			cout << i << endl;
		}
	}
	

	
return 0;
}

