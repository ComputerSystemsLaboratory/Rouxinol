#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string str, order, x;
	int n, a, b;
	
	cin >> str;
	cin >> n;
	
	for(int i = 0; i < n; ++i){
		cin >> order;
		
		
		if(order == "print"){
			cin >> a >> b;
			cout << str.substr(a ,b-a+1) << endl;
		}
		
		
		if(order == "reverse"){
			cin >> a >> b;
			
			x = str.substr(a ,b-a+1);
			
			for(int j = 0; j < x.size(); ++j){
				str[a+j] = x[b-a-j];
			}
		}
		
		
		if(order == "replace"){
			
			cin >> a >> b >> x;
			
			for(int j = 0; j < x.size(); ++j){
				
				str[a+j] = x[j];
			}
		}
		
	}
	
	
	return 0;
}