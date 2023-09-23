#include<iostream>
#include<algorithm>

using namespace std;
bool exist[1000*1000];
int main(){
	int n;
	for(int i = 0;i <= 1000;i++){
		exist[i * (i + 1) / 2] = true;
	}
	while(cin >> n, n){
		int res = 0;
		for(int i = 0;i <= 1000;i++){
			int x = i * (i + 1) / 2;
			if(exist[x + n])res++;
		}
		cout << res-1 << endl;
	}
	return 0;
}