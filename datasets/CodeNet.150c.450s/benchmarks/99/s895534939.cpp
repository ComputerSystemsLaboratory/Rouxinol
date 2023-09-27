#include <iostream>
#include <cstring>
using namespace std;

int Pow(int a){
	int ret = 1;
	for(int i = 0; i < a; i++) ret *= 10;
	return ret;
}

int main(){
	int n;
	cin >> n;
	for(int v = 0; v < n; v++){
		string s[2];
		int t[2] = {0,0};
		int x;
		cin >> s[0] >> s[1];
		for(int u = 0; u < 2; u++){
			for(int i = 0; i < s[u].size(); i++){
				if(s[u][i] == 'm'){
					if(i == 0) t[u] += 1000;
					else if(0<=s[u][i-1]-'0'&&s[u][i-1]-'0'<=9){
						t[u] += 1000*(s[u][i-1]-'0');
					} else{
						t[u] += 1000;
					}
				} else if(s[u][i] == 'c'){
					if(i == 0) t[u] += 100;
					else if(0<=s[u][i-1]-'0'&&s[u][i-1]-'0'<=9){
						t[u] += 100*(s[u][i-1]-'0');
					} else{
						t[u] += 100;
					}
				} else if(s[u][i] == 'x'){
					if(i == 0) t[u] += 10;
					else if(0<=s[u][i-1]-'0'&&s[u][i-1]-'0'<=9){
						t[u] += 10*(s[u][i-1]-'0');
					} else{
						t[u] += 10;
					}
				} else if(s[u][i] == 'i'){
					if(i == 0) t[u] += 1;
					else if(0<=s[u][i-1]-'0'&&s[u][i-1]-'0'<=9){
						t[u] += 1*(s[u][i-1]-'0');
					} else{
						t[u] += 1;
					}
				}
			}
		}
		x = t[0]+t[1];
		char ch[4] = {'i','x','c','m'};
		for(int i = 3; i >= 0; i--){
			int y;
			y = (x%Pow(i+1))/Pow(i);
			if(y == 1){
				cout << ch[i];
			} else if(y >= 2){
				cout << y << ch[i];
			}
		}
		cout << endl;
	}
}