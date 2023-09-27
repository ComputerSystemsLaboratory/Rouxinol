#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <map>

using namespace std;
int main() {
	int N;
	cin >> N;
	int cnt_AC = 0;
	int cnt_WA = 0;
	int cnt_TLE = 0;
	int cnt_RE = 0;
	
	
	for(int i = 0;i<N;i++){
		std::string S;
		cin >> S;
		if(S == "AC"){
			cnt_AC++;
		}
		else if(S == "WA"){
			cnt_WA++;
		}
		else if(S == "TLE"){
			cnt_TLE++;
		}
		else if(S == "RE"){
			cnt_RE++;
		}
		
	}
	
	std::cout << "AC x " << cnt_AC << endl; 
	std::cout << "WA x " << cnt_WA << endl; 
	std::cout << "TLE x " << cnt_TLE << endl; 
	std::cout << "RE x " << cnt_RE << endl; 
	
	return 0;
}
