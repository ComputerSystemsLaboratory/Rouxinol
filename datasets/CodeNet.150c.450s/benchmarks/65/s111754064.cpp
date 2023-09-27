#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;
string str[50];
string strIn[50];
string strbubble[50];
int n;
void bubbleSort(){
	for (int i = 0; i < n; ++i){
		for (int j = n - 1; j >= i; --j){
			if (j-1>=0 && str[j][1] < str[j - 1][1]) swap(str[j], str[j - 1]);
		}
	}
}
void selectionSort(){
	for (int i = 0; i < n; ++i){
		int Min = i;
		for (int j = i; j < n; ++j){
			if (str[j][1] < str[Min][1]) Min = j;
		}
		swap(str[i], str[Min]);
	}
}

int main(){
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> strIn[i];
	for (int i = 0; i < n; ++i) str[i] = strIn[i];
	bubbleSort();
	for (int i = 0; i < n; ++i){
		if (i != 0) cout << ' '; cout << str[i] ;
	}
	cout << '\n';
	cout << "Stable\n";
	for (int i = 0; i < n; ++i) strbubble[i] = str[i];
	for (int i = 0; i < n; ++i) str[i] = strIn[i];
	selectionSort();
	for (int i = 0; i < n; ++i){
		if (i != 0) cout << ' '; cout << str[i];
	}
	cout << '\n';
	bool isSame = true;
	for (int i = 0; i < n; ++i) if (str[i] != strbubble[i]){ isSame = false; break; }
	if (!isSame) cout << "Not stable\n"; else cout << "Stable\n";
}