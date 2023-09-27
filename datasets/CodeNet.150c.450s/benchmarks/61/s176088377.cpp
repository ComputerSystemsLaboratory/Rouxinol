#include <iostream>
#include <algorithm>

using namespace std;

void nextRand(int *x,int a,int b,int c){
	*x = (a * (*x) + b) % c;
}

int main(){
	while(true){
		int n;//リールの数(止める回数)
		int a,b,c;//乱数生成用定数
		int x;//シード(乱数の初期値)
		cin >> n >> a >> b >> c >> x;
		if(n==0){
			break;
		}
		int *reels = new int[n];//特殊な絵柄で止めるための乱数
		for(int i=0;i<n;i++){
			cin >> reels[i];
		}
		int reelidx = 0;
		int frame = -1;//最終的にかかったフレーム数
		for(int i=0;i<10001;i++){//[0,10000] iはフレーム数に対応
			if(x == reels[reelidx]){
				reelidx++;
			}
			nextRand(&x,a,b,c);//ループの最後に呼び出す
			if(reelidx == n){//終わり
				frame = i;
				break;
			}
		}
		cout << frame << endl;
		delete[] reels;
	}
	return 0;
}