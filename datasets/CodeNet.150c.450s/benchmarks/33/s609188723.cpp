#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
bool exist[108][108];
int main(){  
	int x, y, s;
	while(cin >> x >> y >> s, x | y | s){
		int res = 0;
		for(int i = 1;i <= s;i++){
			for(int j = 1;j <= s;j++){
				if(i * (100 + x) / 100 + j * (100 + x) / 100 == s){
					res = max(res, i * (100 + y) / 100 + j * (100 + y) / 100);
				}
			}
		}
		cout<< res << endl;
	}
	return 0;
}