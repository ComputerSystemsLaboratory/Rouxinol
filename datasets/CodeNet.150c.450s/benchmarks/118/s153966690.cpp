#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n,j;
	cin>>n;
	for(j=0;j<n;j++){

		int millennium = 196471;
		int NoD[]={19,20,200,195};
		int year,month,day,sum=0,i;
		cin >> year >> month >> day;
		for(i=1;i<year;i++){
			if(!(i%3))
				sum+=NoD[2];
			else
				sum+=NoD[3];
		}
		for(i=1;i<month;i++){
			if(!(year%3))
				sum+=NoD[1];
			else
				sum+=NoD[i%2];
		}
		sum+=day;

		cout << millennium - sum <<endl;
	}
	return 0;
}