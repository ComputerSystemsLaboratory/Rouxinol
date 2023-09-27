#include<iostream>
using namespace std;

int main(){

long int a,b,sum = 0;
int cou = 1;

while(cin >> a >> b){
sum = a + b;
	while(sum >= 10){
		sum = sum/10;
		cou++;
	}
	cout << cou << "\n";
	cou = 1;
}
    return 0;
}