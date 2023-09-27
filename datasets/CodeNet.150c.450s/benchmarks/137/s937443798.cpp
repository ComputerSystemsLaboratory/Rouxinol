#include <iostream>
#include <string>
#include <set>
#include <queue>

using namespace std;

int main(){
	int n;
	string commond, word;
	set<string> dictionary;
	queue<string> result;

	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> commond;
		if(commond == "insert"){
			cin >> word;
			dictionary.insert(word);
		}
		else{
			cin >> word;
			if(dictionary.count(word)){
				result.push("yes");
			}
			else{
				result.push("no");
			}
		}
	}
	while(!result.empty()){
		cout << result.front() << endl;
		result.pop();
	}

    return 0;
}