#include<iostream>
#include<cmath>
using namespace std;

int sumar(int mat[4]){
	return mat[0]+mat[1]+mat[2]+mat[3];
}

int main(){
	int a[4];
	int b[4];
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
		cin>>b[0]>>b[1]>>b[2]>>b[3];
		cout<<max(sumar(a),sumar(b))<<endl;
	}
	return 0;
}