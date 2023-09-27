
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

int main(){
	string card;int h,m;
	string a,b;
	
	while(true){
		cin>>card;
		if(card=="-")break;
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>h;
			a=card.substr(0,h);
			b=card.substr(h,card.size());
			card=b+a;
		}
		cout<<card<<endl;
	}

return 0;
}