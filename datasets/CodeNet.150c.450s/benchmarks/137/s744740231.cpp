#include <iostream>
#include <list>
#include <string>
#include <algorithm>//std::find
#include <functional>
#include <set>
using namespace std;

int main(void){
	std::cin.tie(0); 
	std::ios::sync_with_stdio(false);
	
	
	int n;
	cin >> n;
	std::string command;
	std::string str;
	//list<string> dictionary;
	std::set<string>dictionary;
	//list<string> ans;
	for(int i=0 ; i < n; i++){
		cin >> command;
		if(command == "insert"){
			cin >> str;
			
			
			
			
			dictionary.insert(str);
			//dictionary.sort();
			
			
		}
		if(command == "find"){
			cin >> str;
			//list<string>::iterator itr = std::find(dictionary.begin(), dictionary.end(), str);
			//dictionary.find(str);
			set<string>::iterator itr = dictionary.find(str);
			
			if(itr != dictionary.end()){
				cout << "yes" << endl;
				//ans.insert(ans.begin(), "no")
			}else cout << "no" << endl;
		}
			
			
		
	}
	
}