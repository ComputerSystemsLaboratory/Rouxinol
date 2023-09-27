#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;
void output(list<int> a);
int main(void){
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	
	
	int n;
	int entersuji;
	cin >> n;
	list<int> suji;
	std::string command;
	for(int i=0 ; i < n; i++){
		cin >> command;
		if(command == "insert"){
			cin >> entersuji;
			suji.insert(suji.begin() , entersuji);
		}
		if(command == "delete"){
			cin >> entersuji;
			list<int>::iterator itr = std::find(suji.begin(), suji.end(), entersuji);
			if( itr != suji.end()){
				suji.erase(itr);
				
			}
			
			
		}
		if(command == "deleteLast"){
			suji.pop_back();
		}
	
		if(command == "deleteFirst"){
			suji.pop_front();
		}
	
	}
	
	list<int>::iterator It = suji.begin();
	std::cout << *It;
	for(++It; It !=suji.end() ; ++It ){
		std::cout << " "<< *It;

	}
	cout << endl;
	
	return 0;
}