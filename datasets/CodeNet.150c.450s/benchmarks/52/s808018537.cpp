#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> car, exit;
	int n;
	
	while( cin >> n ){
		
		if(n != 0){
			car.push_back(n);
		}else{
			exit.push_back( car.back() );
			car.pop_back();
		}
	}
	vector<int>::iterator it = exit.begin();

	while( it != exit.end() ){
		cout << *it << endl;
		++it;
	}
	return 0;
}