#include<iostream>
#include<math.h>

using namespace std;

int countDigit(int num){
	int i;
	for(i=1;pow(10,i)<=num;i++);
	return i;
}

int main(){
    int i,a,b;
    while(cin >> a >> b){
    	cout << countDigit(a+b) << endl;
    }
    return 0;
}