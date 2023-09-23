#include<iostream>
using namespace std; // ;?????????
int main(){
	int a,b,c,i,j=0;
	cin >> a >> b >> c;
	
	for (i=0; i<=b-a; i++){
		if (c % (a+i)==0)
			j++;
	}
	cout << j << endl;
	return 0;
}