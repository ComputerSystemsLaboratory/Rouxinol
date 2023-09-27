#include <iostream>
using namespace std;
int main(){
	int matrix[100][100];
	int vector[100];
	int vector2[100];
	int n,m;
	cin>>n >>m;
	for(int i=0;i<n;i++){
		for(int k=0;k<m;k++){
			cin >> matrix[i][k];
		}
	}
	for(int i=0;i<m;i++){
		cin >> vector[i];
	}
	//input end
	//caliculation start
	
	
	for(int i=0;i<n;i++){
		int x=0;
		for(int k=0; k<m ;k++){
			x += matrix[i][k]*vector[k];
		}
		vector2[i] = x;
	}
    //	caliculation end;
	//output
	for(int i=0;i<n;i++){
		cout<< vector2[i] <<endl;
	}
	return 0;
}