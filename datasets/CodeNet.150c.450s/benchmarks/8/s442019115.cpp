#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
			
int main(){
	int n, tp = 0, hp = 0;
	string tw, hw;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> tw >> hw;
		if(tw.length() < hw.length()){
			tw += '0';
		}
		else if(tw.length() > hw.length()){
			hw += '0';
		}
		if(tw == hw){
			tp++;
			hp++;
		}
		for(int j = 0; j < max(tw.length(), hw.length()); j++){
			if(tw[j] > hw[j]){
				tp += 3;
				break;
			}
			else if(tw[j] < hw[j]){
				hp += 3;
				break;
			}
		}
	}
	
	cout << tp << ' ' << hp << endl;
	
	return 0;
}