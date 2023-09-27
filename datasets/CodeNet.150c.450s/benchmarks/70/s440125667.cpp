#include<iostream>
using namespace std;

int main(){
	int month[]={31,29,31,30,31,30,31,31,30,31,30,31};
	int sum[13];
	char *week[]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
	int m,d;
	sum[0]=0;
	for(int i=1;i<=12;i++)sum[i] = sum[i-1]+month[i-1];
	while(cin>>m>>d,m||d)cout<<week[(sum[m-1]+d-1)%7]<<endl;
	return 0;
}