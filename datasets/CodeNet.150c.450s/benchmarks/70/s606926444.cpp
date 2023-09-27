#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	const string day[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	const int month[]={31,31,29,31,30,31,30,31,31,30,31,30};
	int m,d;
	while(cin>>m>>d,m||d){
		int res=2;
		for(int i=1;i<m;++i){
			res+=month[i%12];
		}
		res+=d;
		cout<<day[res%7]<<endl;
	}
	return 0;
}