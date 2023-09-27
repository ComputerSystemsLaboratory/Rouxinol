// ALDS1_6_C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include<iostream>
using namespace std;
#define MAX 100000
//SENTINELは常にどのカードよりも大きいものにする（今回は上限1000000000の二倍に設定）
#define SENTINEL 2000000000


struct Card {
	char suit;
	int value;
};

//配列を右側と左側にわけて保持するための配列を作る
//MergeSortは入力データ以外にも一時的なメモリを必要とする
//SENTINELの分も入れて少し大きめに
struct Card L [MAX / 2 + 2], R [MAX / 2 + 2];

void merge(struct Card Input[], int left, int mid, int right) {
	// Card[left],…,Card[mid],…,Card[right]
	int i, j, k;
	int size_l = mid - left;
	int size_r = right - mid;
	for (i = 0; i < size_l; i++) L[i] = Input[left + i];
	for (i = 0; i < size_r; i++) R[i] = Input[mid + i];
	L[size_l].value = R[size_r].value = SENTINEL;
	i = j = 0;
	for (k = left; k < right; k++) {
		//L[i]とR[j]を比較してソート
		if (L[i].value <= R[j].value)Input[k] = L[i++];
		else Input[k] = R[j++];
	}

}

void mergeSort(struct Card Input[],int left,int right)
{
	int mid;
	if (left + 1 < right) {
		//leftとrightの差が2以上で処理するつまり要素数が一以下なら処理しない
		mid = (left + right) / 2;
		//mid = 3
		mergeSort(Input, left, mid);//左
		mergeSort(Input, mid, right);//右
		merge(Input, left, mid, right);
	}
}

int partition(struct Card Input[],int left,int right){
	int i, j;
	struct Card kari, index;
	index = Input[right];
	i = left - 1;
	for (j = left; j < right; j++) {
		if (Input[j].value <= index.value) {
			//インデックスの値以下ならインデックスより左に要素を移動する
			i++;
			kari = Input[i]; Input[i] = Input[j]; Input[j] = kari;
		}
	}
	kari = Input[i + 1]; Input[i + 1] = Input[right]; Input[right] = kari;
	return i + 1;
}

void quickSort(struct Card Input[], int left, int right) {
	int index;
	if (left < right) {
		//インデックス以上と以下でソート
		index = partition(Input, left, right);
		//インデックスより前、後をソート
		quickSort(Input, left, index - 1);
		quickSort(Input, index + 1, right);
	}
}

int main()
{
	int num, i, value;
	struct Card Merge_deck[MAX], Quick_deck[MAX];
	char S[10];
	int stable = 1;

	//データ入力ココから
	cin >> num;
	for (i = 0; i < num; i++) {
		cin >> S >> value;
		Merge_deck[i].suit = Quick_deck[i].suit = S[0];
		Merge_deck[i].value = Quick_deck[i].value = value;
	}
	//データ入力ココまで

	mergeSort(Merge_deck, 0, num);
	quickSort(Quick_deck, 0, num - 1);

	for (i = 0; i < num; i++) if (Merge_deck[i].suit != Quick_deck[i].suit) stable = 0;
	//マージソートは常にStableなのでもし一つでもマージソートとクイックソートで異なるカードがあればNot Stable

	//出力ココから
	if (stable == 1)cout << "Stable\n";
	else cout<< "Not stable\n";
	for (i = 0; i < num; i++) {
		cout << Quick_deck[i].suit << " "<< Quick_deck[i].value << "\n";
	}
	//出力ココまで
	return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します

