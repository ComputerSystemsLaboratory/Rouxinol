#include<iostream>
#include<algorithm>

using namespace std;
int cnt[108000];
int n, p;
int main(){
	while(cin >> n >> p, n | p){
		fill(cnt, cnt + n, 0);
		int win = p;
		for(int i = 0;i <= 1000000;i++){
			if(p){
				p--;
				cnt[i%n]++;
				if(cnt[i%n] == win){
					cout << i%n << endl;
					break;
				}
			}
			else{
				p = cnt[i%n];
				cnt[i%n] = 0;
			}
		}
	}
	return 0;
}