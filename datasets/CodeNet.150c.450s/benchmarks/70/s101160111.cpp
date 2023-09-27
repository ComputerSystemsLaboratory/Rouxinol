#include<iostream>
#include<string>
using namespace std;

const string day[7]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};

int mtod(int m){
	if (m==0)return 0;
	int re=0;
	if(m==2)re=29;
	else if(m==4 || m==6||m==9||m==11)re=30;
	else re=31;
	return mtod(m-1)+re;
}
int main(){
	int m,d;
	while(cin>>m>>d && m+d){
		int now=mtod(m-1)+d;
		cout<<day[(now-1)%7]<<endl;
	}
}