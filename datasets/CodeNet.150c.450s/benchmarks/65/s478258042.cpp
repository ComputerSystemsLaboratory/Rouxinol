#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

struct Card {
	char mark;
	int value;
};
Card c[110];
Card c1[110];
Card c2[110];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> c[i].mark >> c[i].value;
		c1[i].mark = c[i].mark;
		c2[i].mark = c[i].mark;
		c1[i].value = c[i].value;
		c2[i].value = c[i].value;
	}

	for(int i = 0; i < n; ++i){
		for(int j = n - 1; j >= 0; --j){
			if(c1[j].value < c1[j - 1].value){
				swap(c1[j].value, c1[j - 1].value);
				swap(c1[j].mark, c1[j - 1].mark);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << c1[i].mark << c1[i].value;
		if(i != n - 1)
			cout << " ";
		else
			cout << endl;
	}
	cout << "Stable" << endl;

	for(int i = 0; i < n; ++i){
		int minj = i;
		for(int j = i; j < n; ++j){
			if(c2[j].value < c2[minj].value){
				minj = j;
			}
		}
		swap(c2[minj].value, c2[i].value);
		swap(c2[minj].mark, c2[i].mark);
	}

	for(int i = 0; i < n; ++i){
		cout << c2[i].mark << c2[i].value;
		if(i != n - 1)
			cout << " ";
		else
			cout << endl;
	}

	bool flag = true;
	for(int i = 0; i < n; ++i){
		if(c1[i].mark != c2[i].mark){
			flag = false;
			break;
		}
	}
	cout << (flag ? "Stable" : "Not stable") << endl;

	return 0;
}