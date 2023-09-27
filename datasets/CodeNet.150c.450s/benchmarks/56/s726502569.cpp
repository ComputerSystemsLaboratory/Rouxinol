#include<iostream>
using namespace std;

int main(void){
	int n,i;
	long int na,min,max,sum;
	cin >> n;
	min=1000000000;
	max=-100000000;
    sum=0;
for(i=1;i<=n;i++){   
	cin >> na;
	if(na<min) min=na;
	if(na>max) max=na;
	sum+=na;


}cout << min << " " << max << " " << sum << endl;
		return 0;
}