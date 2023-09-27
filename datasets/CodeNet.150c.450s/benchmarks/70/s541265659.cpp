#include "bits/stdc++.h"
using namespace std;

int main(){
	int m,d;
	int mm[]={31,29,31,30,31,30,31,31,30,31,30,31};
	string s[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	while(cin>>m>>d){
		if(m==0)break;
		int dd=0;
		for(int i=0;i<m-1;i++)dd+=mm[i];
		dd+=d;
		int ans=(dd+2)%7;
		//cout<<dd<<endl;
		cout<<s[ans]<<endl;
	}
	return 0;
}