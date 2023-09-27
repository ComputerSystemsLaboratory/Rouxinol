#include <iostream>
#include <map>

using namespace std;

int check(int x){
	for(int i=1;i*i<=x;i++){
		if(i * i == x) return i;
	}
	return -1;
}

pair<int, int> calc(int d, int s){
	for(int i=s+1;i*i<d;i++){
		int t = check(d - i*i);
		if(t != -1 && i < t){
			return make_pair(i, t);
		}
	}
	return make_pair(-1, -1);
}

int main(){
	int h, w;
	while(cin >> h >> w && (h|w)){
		int d = h * h + w * w;
		pair<int, int> ans = calc(d, h);
		for(int i=1;ans.first==-1;i++) ans = calc(d+i, 0);
		cout << ans.first << ' ' << ans.second << endl;
	}
	return 0;
}