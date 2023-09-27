#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <map>

using namespace std;
int main() {
	int N;
	cin >> N;
	std::map<std::string, int> Judge;
	Judge["AC"] = 0;
	Judge["WA"] = 0;
	Judge["TLE"] = 0;
	Judge["RE"] = 0;
	
	for(int i = 0;i<N;i++){
		std::string S;
		cin >> S;
		Judge[S]++;
	}
	
	std::cout << "AC x " << Judge["AC"] << endl; 
	std::cout << "WA x " << Judge["WA"] << endl; 
	std::cout << "TLE x " << Judge["TLE"] << endl; 
	std::cout << "RE x " << Judge["RE"] << endl; 
	
	return 0;
}
