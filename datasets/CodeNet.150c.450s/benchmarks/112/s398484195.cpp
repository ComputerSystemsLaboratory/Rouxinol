#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	char buf;
	map<char, char> conv;
	
	while(1){
		cin >> n;
		if(n != 0){
			conv.clear();
			
			for(int i = 0; i < n; i++){
				cin >> buf;
				cin >> conv[buf];
			}

			cin >> n;
			for(int i = 0; i < n; i++){
				cin >> buf;
				
				if(conv.count(buf)){
					cout << conv[buf];
				}else{
					cout << buf;
				}
			}
			
			cout << endl;
		}else{
			break;
		}
	}

	return 0;
}