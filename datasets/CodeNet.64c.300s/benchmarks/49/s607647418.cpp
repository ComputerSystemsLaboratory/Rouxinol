#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int keta(int x){
	int i=0;
	while (x/pow(10,i)>=1){
		i++;
	}
	if (x==0){
		return 1;
	}
	else
	return i;
	}
int main(){
	 int a1,b1;
	while(cin>>a1>>b1){
cout<<keta(a1+b1)<<endl;
	}
	return 0;
}