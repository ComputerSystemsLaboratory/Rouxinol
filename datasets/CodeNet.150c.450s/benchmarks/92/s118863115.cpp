#include <iostream>
using namespace std;

int main(){
	int a, b, ab, digits[200], cnt=0, i;
	while(cin>>a>>b){
		digits[cnt]=1;
		ab = a+b;
		while(ab/=10){
			digits[cnt]++;
		}
		cnt++;
	}
	for(i=0;i<cnt;i++){
		cout<<digits[i]<<endl;
	}
	return 0;
}