#include <iostream>
using namespace std;
int a[200];
int b[200];
int pollock[1000001];
int oddpollock[1000001];
int n,count;

void f(){
	count=1;
	b[0]=1;
	a[0]=1;
	for(int i=1;i<200;i++){
		a[i]=a[i-1]*(i+3)/i;
		if(a[i]%2==1){
			b[count]=a[i];
			count++;
		}
	}
}

int main(){
	f();
	pollock[0]=oddpollock[0]=0;
	pollock[1]=oddpollock[1]=1;
	for(int i=2;i<1000000;i++){
		pollock[i]=pollock[i-1]+1;
		for(int j=1;i>=a[j];j++){
			if(pollock[i]>pollock[i-a[j]]+1)pollock[i]=pollock[i-a[j]]+1;
		}
	}
	for(int i=2;i<1000000;i++){
		oddpollock[i]=oddpollock[i-1]+1;
		for(int j=1;i>=b[j];j++){
			if(oddpollock[i]>oddpollock[i-b[j]]+1)oddpollock[i]=oddpollock[i-b[j]]+1;
		}
	}
	while(1){
		cin >>n;
		if(n==0)break;
		cout <<pollock[n] <<" " <<oddpollock[n] <<endl;
	}
}