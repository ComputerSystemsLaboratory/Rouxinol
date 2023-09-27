#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

struct card{
	char suit;
	int value;
};

void BubbleSort(vector<card> &a, int n){
	for (int i = 0; i < n; i++){
		for (int j = n - 1; j >= i + 1; j--){
			if (a[j].value < a[j - 1].value) swap(a[j], a[j - 1]);
		}
	}
}

void SelectionSort(vector<card> &a, int n){
	int minj;
	for (int i = 0; i < n; i++){
		minj = i;
		for (int j = i; j < n; j++){
			if (a[j].value < a[minj].value) minj = j;
		}
		if (i != minj) swap(a[i], a[minj]);;
	}
}

int main(){
	int n;
	string s;
	cin >> n;
	vector<vector<char> > s_cheak(14), s_testb(14), s_tests(14);
	vector<card> a(n), b(n);
	for (int i = 0; i < n; i++){
		cin >> s;
		a[i].suit = s[0];
		a[i].value = s[1] - '0';
		b[i] = a[i];
		s_cheak[s[1] - '0'].push_back(s[0]);
	}
	BubbleSort(a, n);
	for (int i = 0; i < n; i++){
		cout << a[i].suit << a[i].value;
		s_testb[a[i].value].push_back(a[i].suit);
		if (i != n - 1) cout << " ";
	}
	cout << endl;
	if (s_cheak == s_testb) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	SelectionSort(b, n);
	for (int i = 0; i < n; i++){
		cout << b[i].suit << b[i].value;
		s_tests[b[i].value].push_back(b[i].suit);
		if (i != n - 1) cout << " ";
	}
	cout << endl;
	if (s_cheak == s_tests) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
}