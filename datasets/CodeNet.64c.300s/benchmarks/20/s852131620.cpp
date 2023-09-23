#include<iostream>
#include<algorithm>
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
int d;
while(cin>>d){
	int sum=0;
	for (int i=0;i<600/d;i++){
		sum+=(i*d)*(i*d)*d;
	}
	cout<<sum<<endl;
}
return 0;
}