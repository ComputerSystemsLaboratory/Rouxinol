#include <iostream>
#include <stack>
#include <utility>
#include <string>
using namespace std;

string area;
int main(){
	while(cin >> area){
		stack<pair<int,int> > result;
		stack<int> lake;
		for(int i=0;i<area.size();i++){
			if(area[i]=='\\'){
				lake.push(i);
			}
			if(area[i]=='/'){
				if(!lake.empty()){
				int lake_start = lake.top();
				lake.pop();
				int square = i-lake_start-1+1;	//面積を計算
				if(!result.empty()){	//水面が隠れているか判定
					pair<int,int> late = result.top();
					while(lake_start<late.first){	//隠れているなら
						result.pop();	//消去
						square += late.second;	//面積を追加
						if(!result.empty()){ 	//まだ調べるか？
							late = result.top();
						}
						else{	//while文止める用
							late = make_pair(lake_start,0);
						}
					}
				}
				pair<int,int> result0;
				result0 = make_pair(lake_start,square);
				result.push(result0);
				}
			}
		}
		int k = result.size();
		stack<int> square_result;
		int sum = 0;
		if(result.empty()){ //水たまりが0個
			cout << 0 << endl;
			cout << 0 << endl;
		}else{
			while(!result.empty()){
				pair<int,int> a = result.top();
				result.pop();
				int square_part = a.second;
				square_result.push(square_part);
				sum += square_part;
			}
			cout << sum << endl;
			cout << k << " ";
			while(square_result.size()!=1){
				int s = square_result.top();
				square_result.pop();
				cout << s << " ";
			}
			int s = square_result.top();
			cout << s << endl;
		}
	}
}

#if 0
所要時間が考察を自力で1時間，テキストのヒントを見てから実装，バク取りしてACまで100分程度。おおまかな方針の理解は
早かったと思うが，実装，特に隠れている水たまりを消去する部分に苦戦した。また，stackが空なのにtop
しようとするなどバグを取るのも大変だった。実装方針に問題があったのだろうか(コードも長くなった)。
#endif
