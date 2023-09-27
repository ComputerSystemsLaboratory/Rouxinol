#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
const int len=1000050;
 
inline int prev(int pos) {
    return (pos == 0) ? len - 1 : pos - 1;
}
 
inline int next(int pos) {
    return (pos == len - 1) ? 0 : pos + 1;
}

int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
	int n;
	cin >> n;
	vector<int> list(len);
	int first=0, last=0;
	
	string op;
	int key;
	for(int i=0; i<n; i++){
		cin >> op;
		if(op == "insert"){
			cin >> key;
			first = prev(first);
			list[first] = key;
		} else if (op == "deleteFirst"){
			while(list[first] == -1){
				first = next(first);
			}
			first = next(first);
		} else if(op == "deleteLast"){
			while(list[prev(last)] == -1){
				last = prev(last);
			}
			last = prev(last);
		} else{
			cin >> key;
			for(int j=first; j != last; j=next(j)){
				if(list[j] == key){
					list[j] = -1;
					break;
				}
			}
		}
	}
	
	bool nospace = true;
    for (int i=first; i!=last; i=next(i)) {
        if (list[i] == -1) continue;
        if (nospace) {
            cout << list[i];
            nospace = false;
        } else {
            cout << " " << list[i];
        }
    }
    cout << endl;
}