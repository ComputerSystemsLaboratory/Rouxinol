#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main (void){
	set<string> t;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		t.clear();
		string s;
		cin >> s;
		for(int j = 0; j < s.length() - 1; j++){
			string te1="", te2="", te3="", te4="";
			for(int k = 0; k <= j; k++){
				te1 += s[k];
				te2 += s[j-k];
			}
			for(int k = j+1; k < s.length(); k++){
				te3 += s[k];
				te4 += s[s.length()- (k - j - 1) - 1];
			}
			t.insert(te1+te3);
			t.insert(te1+te4);
			t.insert(te2+te3);
			t.insert(te2+te4);
			t.insert(te3+te1);
			t.insert(te3+te2);
			t.insert(te4+te1);
			t.insert(te4+te2);
			//cout << te1 << " " << te2 << " " << te3 << " " << te4 << endl;
		}
		cout << t.size() << endl;

	}


	return 0;
}
