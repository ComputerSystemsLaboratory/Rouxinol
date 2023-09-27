#include <iostream>
#include <string>
using namespace std;

int main(){
	const int MAX_w = 30;
	int w, n, a, b, c, p;
	int lots[MAX_w + 1];
	string str;
	
	for(int i = 1; i <= MAX_w; i++){
		lots[i] = i;
	}
	
	cin >> w >> n;
	
	for(int i = 0; i < n; i++){
		a = 0; b = 0;
		cin >> str;
		
		p = 0;
		while(str[p] != ','){
			a = a * 10 + (str[p] - 48);
			p++;
		}
		p++;
		while(p < str.size()){
			b = b * 10 + (str[p] - 48);
			p++;
		}
		
		c = lots[a];
		lots[a] = lots[b];
		lots[b] = c;
	}
	
	for(int i = 1; i <= w; i++){
		cout << lots[i] << endl;
	}
	
	return 0;
}