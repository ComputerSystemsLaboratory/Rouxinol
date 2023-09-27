//ITP1_9 Finding a Word

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	//単語の読み込み
	string W, P;
	cin >> W;
	for(int i = 0; i < W.length(); i++){
		W[i] = tolower(W[i]);
	}
	
	//文章の読み込む+Wと一致するかの判定
	int count = 0;
	while(1){
		cin >> P;
		if(P == "END_OF_TEXT")
			break;
		for(int i = 0; i < P.length(); i++){
			P[i] = tolower(P[i]);
		}
		if(P == W)
			count++;
	}
	cout << count << endl;
	return 0;
}