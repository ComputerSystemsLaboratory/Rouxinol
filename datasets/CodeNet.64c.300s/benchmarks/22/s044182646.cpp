#include<iostream>

using namespace std;



int main(){
	int kai,i;
	int a,b,c;


	cin >> kai;

	for(i=0;i<kai;i++){
		cin >> a >> b >> c;

		if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}