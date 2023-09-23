#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n,a,b;
	long suma=0,sumb=0;
	cin >> n;
	while(n!=0){
		for(int i=0;i<n;i++){
			cin >> a >> b;
			if(a>b) suma+=a+b;
			else if(a<b) sumb+=a+b;
			else{suma+=a;sumb+=b;}
		}
		printf("%ld %ld\n",suma,sumb);
		cin >> n;
		suma = sumb = 0;
	}
	return 0;
}