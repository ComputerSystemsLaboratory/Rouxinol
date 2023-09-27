#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <map>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

template<typename t1, class t2>
void input(t1 count,t2* array) {
	for(t1 i = 0;i < count;i++) {
		cin >> array[i];
	}
}

template<typename t1, class t2>
void output(t1 count,t2 array) {
	for(t1 i = 0;i < count;i++) {
		cout << array[i].str;
		if(i != count - 1) cout << " ";
	}
	cout << endl;
}

class card{
public:
	char suit;
	int value;
	string str;
	card(string& s) {
		str = s;
		suit = s[0];
		s[0] = '0';
		value = atoi(s.c_str());
	}
	bool operator<(card& e) const {
		return this->value < e.value;
	}
};

void bubbleSort(int n,vector<card>& a) {
	for(int i = 0;i < n;i++) {
		for(int j = n-1;j > i;j--) {
			if(a[j] < a[j-1]) swap(a[j],a[j-1]);
		}
	}
}

void selectionSort(int n,vector<card>& a) {
	for(int i = 0;i < n;i++) {
		int m = i;
		for(int j = i+1;j < n;j++) if(a[j] < a[m]) m = j;
		if(m != i) swap(a[i],a[m]);
	}
}

bool isStable(vector<card>& a,vector<card>& b) {
	for(int i = 1;i <= 9;i++) {
		int ind[2] = {0,0};
		while(ind[0] != a.size() && ind[1] != b.size()) {
			while(a[ind[0]].value != i && ind[0] != a.size()-1) ind[0]++;
			while(b[ind[1]].value != i && ind[1] != b.size()-1) ind[1]++;
			if(a[ind[0]].suit != b[ind[1]].suit && a[ind[0]].value == i && a[ind[1]].value == i) return false;
			ind[0]++;
			ind[1]++;
		}
	}
	return true;
}

int main(int argc,char** argv) {
	int n;
	vector<card> a;
	cin >> n;
	string s;
	for(int i = 0;i < n;i++) {
		cin >> s;
		a.push_back(card(s));
	}
	vector<card> b = a,c = a;
	bubbleSort(n,b);
	output(n,b);
	if(isStable(a,b)) cout << "Stable" << endl;
	else cout << "Not Stable" << endl;
	selectionSort(n,c);
	output(n,c);
	if(isStable(a,c)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;

}

