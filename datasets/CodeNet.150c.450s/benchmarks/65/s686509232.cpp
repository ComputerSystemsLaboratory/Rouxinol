#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

//カードの変数を２つ用意
//各々バブル。選択ソートでソート。
//各々の答えを引っ張ってきて、同じであれば安定、違うなら不安定
//ソートはアルファベットも同様にソートする
struct Card{char suit,value;};

void bubbleSort(struct Card C1[],int n){//バブルソート

	int flag = 1;

	for(int i=0;flag;i++){//flagがtrueのときに動くsはソートし終わった文字数を表している
		flag = 0;

		for(int j = n-1;i<j;j--){//数列の一番最後の数字からだんだん下がっていく
			if(C1[j].value < C1[j-1].value){		//iより小さいとソートは終わってる
				swap(C1[j],C1[j-1]);//ソート中の数字より一個前の数字が小さければ交換
				flag = 1;
			}
		}
	}
}

void SelectionSort(struct Card C2[],int n){
	for(int i = 0;i < n;i++){
		int minj = i;

		//iより後でA[i]よりもっとも小さい値の添字を求める
		for(int j = i; j < n;j++){
			if(C2[j].value < C2[minj].value) minj = j;
		}

		if(i != minj) swap(C2[i],C2[minj]);
	}
}

bool isstable(struct Card C1[],struct Card C2[],int n){
	for(int i = 0;i<n;i++){
		if(C1[i].suit != C2[i].suit) return false;
	}
	return true;
}

int main(){
	Card C1[100],C2[100]; 
	int n;
	char ch;
	cin >> n;
	for(int i = 0;i < n;i++) {
		cin >> C1[i].suit >> C1[i].value;
		C2[i] = C1[i];
	}

	//for(int i = 0;i < n;i++)C2[i] = C1[i];

	bubbleSort(C1,n);
	SelectionSort(C2,n);

	//bubbleSort
	for(int i = 0;i < n;i++){
		if(i)cout << " ";
		cout << C1[i].suit << C1[i].value;
	}
	cout << endl;
	cout << "Stable" << endl;

	//SelectionSort
	for(int i = 0;i < n;i++){
		if(i)cout << " ";
		cout << C2[i].suit << C2[i].value;
	}

	cout << endl;

	if(isstable(C1,C2,n)){
		cout << "Stable" <<endl;
	}else{
		cout << "Not stable" <<endl;
	}

	return 0;
}
