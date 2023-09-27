#include <algorithm>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int main(){
    int n;
    while (1){
	cin >> n;
	if (n == 0) break;
	char b, t;
	map<char, char> m;
	vector<char> his;
	for (int i = 0; i < n; i++){
	    cin >> b >> t;
	    m.insert(map<char, char>::value_type(b, t));
	    his.push_back(b);
	}
	cin >> n;
	char c;
	for (int i = 0; i < n; i++){
	    cin >> c;
	    vector<char>::iterator f = find(his.begin(), his.end(), c);
	    if (f != his.end()) cout << m[c];
	    else cout << c;
	}
	cout << endl;
    }
}