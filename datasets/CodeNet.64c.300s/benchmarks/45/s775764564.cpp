#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	while(true){
		int n;//競技者の数
		int m;//優勝した競技者の番号
		int p;//掛け金すべてプールされた後の控除率
		cin >> n >> m >> p;
		if(n==0 && m == 0 && p == 0){
			break;
		}
		int allcnt = 0;//投票したすべての枚数
		int viccnt = 0;//当選した枚数
		for(int i=0;i<n;i++){
			int num;//i+1番目の競技者にかけた人数
			cin >> num;
			allcnt += num;
			if(i+1 == m){
				viccnt += num;
			}
		}
		int result;
		if(viccnt == 0){
			result = 0;
		}else{
			int pool = 100 * allcnt * (100 - p) /100;//控除後のプールされたお金
			result = pool/viccnt;
		}
		cout << result << endl;
	}
	return 0;
}