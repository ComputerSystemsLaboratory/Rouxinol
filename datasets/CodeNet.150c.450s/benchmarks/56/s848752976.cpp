#include<iostream>
using namespace std;
	int main() {
		long long n,goukei=0,saidai=0,saisyou=0,flag=1;
		cin >> n;
		long long a[10000];			

		while (n > 0) {
			cin>>a[n];
			if (flag==1) {
				saisyou = a[n];
				saidai = a[n];
			}
		
		    

			goukei += a[n];
			if (saidai<a[n]) {
			
				saidai = a[n];

			}
			if (saisyou>a[n]){
			
				saisyou = a[n];
			
			}
			n--;
			flag = 0;
		}
		cout << saisyou<<" "<< saidai<<" "<< goukei<<endl;
		return 0;

		

}