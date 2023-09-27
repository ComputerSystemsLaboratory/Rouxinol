#include<bits/stdc++.h>
using namespace std;
int main(void){
	int m,d;
	string day[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday",};
	int box[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int sum;
	int h;
	while(1){
		cin>>m>>d;
		if(m==0&&d==0)	break;
		sum=d;
		for(int i=0;i<m-1;i++){
			//cout<<i<<endl;
			sum+=box[i];
		}
		//cout<<sum<<endl;
		h=sum%7;
		cout<<day[h]<<endl;
	}
	return 0;
}
