#include<iostream>
using namespace std;

int main() {
	int n; //いくつの文字を変換するか
	int m; //変換するデータ数
	char *before;
	char *after;
	char *output;
	char *all[20000];//最後の出力
	int index = 0;
	while (true) {
		cin >> n;//n個変換
		if(n==0)break;
		before = new char[n];
		after = new char[n];
		for (int i = 0; i < n; i++) {
			cin >> before[i] >> after[i]; //入力
		}
		cin >> m;
		output = new char[m+1];
		for(int i=0; i<m; i++){
			cin >> output[i];
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if(output[i]==before[j]){
					//変換する
					output[i]=after[j];
					break;
				}
			}
		}
		output[m]='\0';
		all[index]=output;
		index++;
		delete[] before;
		delete[] after;
	}
	for(int i=0; i<index; i++){
		cout<<all[i]<<"\n";
	}
	return 0;
}