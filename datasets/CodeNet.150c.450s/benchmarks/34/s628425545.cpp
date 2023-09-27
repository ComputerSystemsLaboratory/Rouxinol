#include <algorithm>
#include <iostream>
using namespace std;


int main(){
	int a[128];
	a[0]=a[1]=1;
	for(int i=1 ; i<32 ; i++){
		a[i]=a[i-1];
		if(i>1) a[i]+=a[i-2];
		if(i>2) a[i]+=a[i-3];
	}
	int n;
	while(cin>> n){
		if(n!=0){
		int day = (a[n]-a[n]%10)/10 + 1;
		int year =(day - day %365 )/365 + 1;
		cout<<year<<endl;
		}
	}


}