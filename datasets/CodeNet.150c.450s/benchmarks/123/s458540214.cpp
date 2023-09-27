#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int N,num,count=0;
	bool flag;
	
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>num;
		flag=true;
		if(num==2) count++;
		if(num%2==0) flag=false;
		for(int j=3;j<=sqrt(num);j+=2){
			if(num%j==0){
				flag=false;
				break;
			}
		}
		if(flag==true) count++; 
	}
	cout<<count<<endl;
	return 0;
}