#include <iostream>
#include <map>
#include <set>
#include <string>

#define rep(i,s,n) for(int i=(s);i<(n);i++)

using namespace std;

int main ( void ){
	while(true){
		// 列車本数の入力
		int n;
		cin >> n;
		//0なら終了
		if(n==0) break;

		//時刻表を保存するためのmap
		//keyに時間(string)，valueに発車(1)か到着(-1)のmultiset
		//同一時間に出発，発着があり得るため，setではなくmultiset
		//また後の処理で到着の方を優先する必要があるため到着が先頭に来るように
		//到着を-1で出発を1としてソートする．
		map<string,multiset<int> > timetable;

		//n回の入力に対して
		rep(i,0,n){
			// 入力用文字列 電車の出発・到着時間
			string time;
			//まず出発時間を取得
			cin >> time;
			//出発時間に対して出発を示す(1)を挿入
			timetable[time].insert(1);
	
			//到着時間を取得
			cin >> time;
			//到着時間に対して到着を示す(-1)を挿入
			timetable[time].insert(-1);
		}
	
		//必要な台数を保持しておく,cntを用意する
		int cnt=0;
		//もっとも必要になった時間を保持するmaxNofCar
		int maxNofCar=0;

		//入力された時刻表を先頭から走査する
		for(map<string,multiset<int> >::iterator it=timetable.begin();it!=timetable.end();it++){
			//同一時間のものは到着から処理する
			for(multiset<int>::iterator it2=(*it).second.begin();it2!=(*it).second.end();it2++){
				//必要な台数に対して到着したなら -1 出発したなら +1 を足す
				cnt+=(*it2);
				//その際の最大値を保持する
				maxNofCar=maxNofCar<cnt?cnt:maxNofCar;
			}
		}
		//解を出力
		cout << maxNofCar << endl;
	}
}