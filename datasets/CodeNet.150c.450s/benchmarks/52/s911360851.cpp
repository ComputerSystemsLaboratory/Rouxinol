#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> RailRoad, out;
	int buf;

	// 入力の終わりまで読み込み
	while(cin >> buf){
		if(buf == 0){
			buf = RailRoad[((int)RailRoad.size() - 1)];
			out.push_back(buf);
			RailRoad.pop_back();
		}else{
			RailRoad.push_back(buf);
		}
	}

	// イテレータの初期化
	for(vector<int>::iterator it = out.begin();it != out.end();++it){
		cout << *it << endl;
	}

	return 0;
}