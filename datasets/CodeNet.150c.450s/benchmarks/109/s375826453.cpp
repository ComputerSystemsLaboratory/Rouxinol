#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int timetable[60*60*24];
	
int main(void){
	int n;
	while(cin >> n,n){
		for(int i=0;i<60*60*24;i++)
			timetable[i]=0;
		for(int j=0;j<n;j++){
			string l,a;
			cin >> l >> a;
			int lh=atoi(l.substr(0,2).c_str());
			int lm=atoi(l.substr(3,2).c_str());
			int ls=atoi(l.substr(6,2).c_str());
			int ah=atoi(a.substr(0,2).c_str());
			int am=atoi(a.substr(3,2).c_str());
			int as=atoi(a.substr(6,2).c_str());
			int from=lh*60*60+lm*60+ls;
			int to=ah*60*60+am*60+as;
			for(int i=from;i<to;i++)
				timetable[i]++;
		}
		int cmax=0;
		for(int i=0;i<60*60*24;i++)
			cmax=max(cmax,timetable[i]);
		cout << cmax << endl;
	}
	return 0;
}