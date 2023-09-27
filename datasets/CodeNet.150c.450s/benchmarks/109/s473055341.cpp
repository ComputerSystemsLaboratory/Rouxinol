/*** ??§?´? ***/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int i, j;
	int hh, mm, ss;
	int time[100000], count;
	
	cin >> n;
	while(n!=0){
		for(i=0; i<100000; ++i) time[i]=0;
		
		for(i=0; i<n; ++i){
			scanf("%d:%d:%d", &hh, &mm, &ss);
			//cin >> hh >>":" >> mm >> ":" >> ss;
			time[ss+60*mm+3600*hh]++;
			scanf("%d:%d:%d", &hh, &mm, &ss);
			//cin >> hh >>":" >> mm >> ":" >> ss;
			time[ss+60*mm+3600*hh]--;
		}
		
		count=0;
		for(i=0; i<100000; ++i){
			if(i>0) time[i]+=time[i-1];
			count = max(count, time[i]);
		}
		cout << count << endl;
		cin >> n;
	}
	return 0;
}