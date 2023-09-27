#include <iostream>
#include <string>  
#include <cstdio> 
#include <queue> 
#include <algorithm> 
#define endl '\n' 

using namespace std ; 

priority_queue < int > qu ; 
 
int main()
{ 
	while(true){ 
		string s ; cin >> s ;
		if(s == "insert"){
			int num ; cin >> num ; 
			qu.push(num) ; 
		}
		else if(s == "extract"){ 
			cout << qu.top() << endl ;
			qu.pop() ; 
		}
		
		if(s == "end") break ; 
	}
		
	return 0 ;
}

