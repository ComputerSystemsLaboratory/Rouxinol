#include<iostream>
#include<vector>
#include<queue>
#include<set>

using namespace std;

string reverse(string str){
	for (int i = 0; i < (str.size())/2 ; i++){
		char tmp = str[i];
		str[i] = str[str.size() - i - 1];
		str[str.size() - i - 1] = tmp;
	}
	return str;
}
int main(){
	int n; cin >> n;
	for (int i  = 0; i < n; i++){
		string str; cin >> str;
		set<string> set;
		for (int j = 1; j < str.size(); j++){
			string head = str.substr(0,j);
			string tail = str.substr(j);
			string rhead = reverse(head);	
			string rtail = reverse(tail);	
			set.insert(head + tail);
			set.insert(rhead + tail);
			set.insert(head + rtail);
			set.insert(rhead + rtail);
			set.insert(tail + head);
			set.insert(rtail + head);
			set.insert(tail + rhead);
			set.insert(rtail + rhead);
		}
		cout << set.size() << endl;

	}
return 0;
}