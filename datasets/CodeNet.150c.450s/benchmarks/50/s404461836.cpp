#include <iostream>
using namespace std;

int main(void){
	int n;
	while(cin >> n){
		int currency[]={500,100,50,10,5,1};
		int count = 0;
		int pay = 1000 - n;
		if(n==0) break;
		for(int i=0;i<6;++i){
			if(pay/currency[i]>0) count+=pay/currency[i];
			pay%=currency[i];
		}
		cout << count << "\n";
	}
	return 0;
}