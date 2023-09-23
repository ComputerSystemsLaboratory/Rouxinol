#include<iostream>
using namespace std;

int main(){
long int sum,buf1,buf2;
int c;

while(cin >> buf1 >> buf2){
	c = 1;
	sum = buf1 + buf2;
	
	while(sum/10 != 0){
		sum /= 10;
		c++;
	}
	cout << c << endl;
}
return 0;
}