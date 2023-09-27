#include<iostream>
#include<string>
using namespace std;
string d[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int x[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int y[12][31];
int main(){
	int a,b;
	while(true){
		cin>>a>>b;
		if(a==0){break;}
		int cnt=0;
		for(int i=0;i<12;i++){
			for(int j=0;j<x[i];j++){
				y[i][j]=cnt;
				cnt++;
			}
		}
		int D=y[a-1][b-1];
		D=(D+4)%7;
		cout<<d[D]<<endl;
	}
}