#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;
#define F first
#define S second
typedef pair<string ,int> P;

int main(void){
	string tmp;
	int now=0;
	P list[1000];
	P cmax,lmax;
	cmax.S=0,lmax.S=0;
	for(int i=0;i<1000;i++)
		list[i].S=0;
	while(true){
		if(cin.eof())
			break;
		cin >> tmp;
		bool check=false;
		for(int i=0;i<now;i++){
			if(tmp==list[i].F){
				list[i].S++;
				check=true;
				break;
			}
		}
		if(check)
			continue;
		else
			list[now].F=tmp,list[now].S++,now++;
	}
	for(int i=0;i<now;i++){
		if(list[i].S>cmax.S)
				cmax.S=list[i].S,cmax.F=list[i].F;
		if(list[i].F.size()>lmax.S)
				lmax.S=list[i].F.size(),lmax.F=list[i].F;
	}
	cout << cmax.F <<  ' ' << lmax.F << endl;
	return 0;
}