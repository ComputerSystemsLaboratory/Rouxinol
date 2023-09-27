#include<iostream>
#include<string>
using namespace std;

class Card {
private:
	string type;//入力文字列
	short number;//typeの番号
public:
	short order;//入力順番

	void InputType();//typeへ入力
	void ChangeType();//TypeをNumberへ変更
	short GetNumber();//number取得
	string GetType();
};

void Copy(Card* tocard, Card *fromcard,short size);
void BubbleSort(Card* card, short size);
void SelectSort(Card* card, short size);
void ResultOutput(Card* card, short size);
bool IsStable(Card* card, short size);

int main()
{
	short N;
	cin >> N;

	Card card[36], copycard[36];

	//カード入力　数字部分変更	入力順番
	for (short i = 0; i < N; i++) {
		card[i].InputType();
		card[i].ChangeType();
		card[i].order = i;
	}

	Copy(copycard, card,N);//配列をソート用にコピー

	BubbleSort(copycard, N);//バブルソート
	ResultOutput(copycard, N);//結果出力

	//安定判定
	if (IsStable(copycard, N)) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}

	//もう一度コピー
	Copy(copycard, card, N);

	SelectSort(copycard, N);//選択ソート

	ResultOutput(copycard, N);

	//安定判定
	if (IsStable(copycard, N)) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}

	return 0;
}

void Card::InputType()
{
	cin >> type;
}

void Card::ChangeType()
{
	const char* a = &type[1];

	number = atoi(a);
}

short Card::GetNumber()
{
	return number;
}

string Card::GetType()
{
	return type;
}

void Copy(Card* tocard,Card *fromcard, const short size)
{
	for (short i = 0; i < size; i++) {
		tocard[i] = fromcard[i];
	}
}

void BubbleSort(Card *card, const short size)
{

	for (short i = size - 1; i > 0; i--) {
		for (short j = 0; j < i; j++) {
			if (card[j].GetNumber() > card[j + 1].GetNumber()) {
				std::swap(card[j], card[j + 1]);
			}
		}
	}
}

void SelectSort(Card *card, const short size)
{
	int keep;

	for (int i = 0; i < size; i++) {
		keep = i;
		for (int j = i; j < size; j++) {
			if (card[j].GetNumber() < card[keep].GetNumber()) {
				keep = j;
			}
		}
		if (keep != i) {
			std::swap(card[i], card[keep]);
		}
	}
}

void ResultOutput(Card *card,const short size)
{
	for (short i = 0; i < size; i++) {
		cout << card[i].GetType();
		if (i == size - 1) {
			break;
		}
		cout << " ";
	}
	cout << endl;
}

bool IsStable(Card* card,const short size)
{
	for (short i = 0; i < size - 1; i++) {
		//安定していない
		if (card[i].GetNumber() == card[i + 1].GetNumber() && card[i].order > card[i+1].order) {
			return false;
		}
	}

	return true;

}
