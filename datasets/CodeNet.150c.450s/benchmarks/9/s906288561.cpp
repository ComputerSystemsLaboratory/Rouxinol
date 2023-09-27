#include<iostream>
#include <cstdio>
#include<cctype>
#include <algorithm>
#include<string>

using namespace std;

int main(){
	string card,ans;
	int m,h,total_h,act_h;
	
	while(1){
		cin >> card;
		
		if(card == "-") break;
		
		cin >> m;
		total_h = 0;
		
		for(int i = 0; i < m; i++){
			cin >> h;
			total_h += h;
		}

		int n = card.length();		
		
		act_h = 0;
		
		act_h = total_h % n;
		card += card;
		ans = card.substr(act_h,n);
		
		cout << ans << endl;
	}
	
	return 0;
}