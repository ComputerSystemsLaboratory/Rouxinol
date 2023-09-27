#include <iostream>
#include <vector>
using namespace std;
//---------------------------------------
vector<string> BubbleSort(vector<string> a);
vector<string> SelectionSort(vector<string> a);
void Show(vector<string> a);
void ShowStable(const vector<string> sa, const vector<string> a);
bool IsStable(const vector<string> sa, const vector<string> a);
//---------------------------------------

int main(void)
{
	int n;
	vector<string> a;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		string card;
		cin >> card;
		a.push_back(card);
	}
	
	//?????????
	vector<string> bs_a = BubbleSort(a);
	vector<string> ss_a = SelectionSort(a);
	
	//??¨???
	Show(bs_a);
	ShowStable(bs_a, a);
	Show(ss_a);
	ShowStable(ss_a, a);
	
	return 0;
}
//------------------------------------------
vector<string> BubbleSort(vector<string> a){
	
	for(int i = 0; i <= a.size() -1; i++){
		for(int j = a.size() -1; j >= i+1; j--){
			if(a[j][1] < a[j-1][1]){
				string temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	return a;
}
//------------------------------------------
vector<string> SelectionSort(vector<string> a){
	
	for(int i = 0; i < a.size(); i++){
		int minj = i;
		for(int j = i; j < a.size(); j++){
			if(a[j][1] < a[minj][1]){
				minj = j; //??????(i)??¨???????????§???????°????????????????????????????
			}
		}
		if(i == minj){
			continue; //??\???????????????for????????????
		}
		string temp = a[i];  //???????°???????????????????(i)????§?????????????
		a[i] = a[minj];
		a[minj] = temp;
	}
	return a;
}
//--------------------------------------------
void Show(vector<string> a){
	for(int i = 0; i < a.size() - 1; i++){
		cout << a[i] << ' ';
	}
	cout << a[a.size() - 1] << endl;
	
}
//--------------------------------------------
void ShowStable(const vector<string> sa, const vector<string> a){
	
	if(IsStable(sa, a)){
		cout << "Stable" << endl;
	}
	else{
		cout << "Not stable" << endl;
	}
	
}
//--------------------------------------------
bool IsStable(const vector<string> sa, const vector<string> a){

	string a_moji;
	
	for(int j = 1; j < 10; j++){
		for(int i = 0; i < a.size(); i++){
			if(a[i][1] == j+'0'){
				a_moji.push_back(a[i][0]);  //??°???????°?????????????a_moji?????\??????
			}
		}
	}
	for(int i = 0; i < a.size(); i++){
		if(a_moji[i] != sa[i][0]){
			return false;
		}
	}
	return true;

}