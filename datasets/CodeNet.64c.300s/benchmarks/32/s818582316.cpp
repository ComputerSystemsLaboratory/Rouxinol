#include<iostream>
using namespace std;

int main(){
	int n;
	cin >>n;
	
	long long a,min=0,max=0,sum=0;
	
	for (int i=1; i<=n; i++){
		cin>> a;
		if (i==1)min=a, max=a;
		if (a<min)min=a;
		if (a>max)max=a;
		sum +=a;
	}
	
	cout<< min <<" "<< max <<" "<< sum <<"\n";
	
	return 0;
}