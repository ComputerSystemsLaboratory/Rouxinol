#include<iostream>
using namespace std;
int main(){
	bool a[1000000];
	for(int abc=2;abc<=999999;abc++){
		a[abc]=true;
	}
	for(int abc=2;abc<=999999;abc++){
		if(a[abc]==true){
			for(int ab=abc*2;ab<=999999;ab+=abc){
				a[ab]=false;
			}
		}
	}
	int ad;
	while(cin>>ad){
		int ansa=0;
		for(int abc=2;abc<=ad;abc++){
			if(a[abc]==true){
				ansa++;
			}
		}
		cout<<ansa<<endl;
	}
	return 0;
}