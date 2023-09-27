#include <iostream>
#include <cstring>
#include <sstream>
#include <cctype>
using namespace std;
int main(){
	string W, Wt;
	cin >> W;
	int co = 0;
	while(cin >> Wt){
		if (Wt == "END_OF_TEXT")break;
		for (int i = 0; i < Wt.size(); i++){
			Wt[i] = tolower(Wt[i]);
		}
		if (Wt == W)co++;
	}
	cout << co << endl;
}
