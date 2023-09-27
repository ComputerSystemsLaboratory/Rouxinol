#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int countAC = 0;
	int countWA = 0;
	int countTLE = 0;
	int countRE = 0;
	for(int i = 0; i < n; i++){
	string a;
	cin >> a;
	if(a == "AC") countAC++;
	else if(a == "TLE") countTLE++;
	else if(a == "WA") countWA++;
	else countRE++;
	}
	cout << "AC x " << countAC << endl;
	cout << "WA x " << countWA << endl;
	cout << "TLE x " << countTLE << endl;
	cout << "RE x " << countRE << endl;
return 0;
}