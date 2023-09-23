#include<iostream>
#include<vector>
using namespace std;
int main(void){
	int n;
	while(1){
cin>>n;
if(n==0)break;
int t=0;
int sum=0;
int i=0,j=1;
while(i<n){
	i++;
sum+=i;
while(sum>=n){
	if(sum==n)t++;
sum-=j;
j++;
}

}
cout<<t-1<<endl;
	}
	return 0;
}