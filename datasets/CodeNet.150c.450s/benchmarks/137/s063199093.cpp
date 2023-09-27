#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
	int n;
	cin >> n;
	string x;
	set<string> data;
	for(int i = 0; i < n; i++){
		cin >> x;
		string tmp;
		cin >> tmp;
		if(x == "insert"){
			data.insert(tmp);
		}else{
			(data.find(tmp) != data.end()) ? (x = "yes") : (x = "no");
			cout << x << endl;
		}
	}
	return 0;
}		