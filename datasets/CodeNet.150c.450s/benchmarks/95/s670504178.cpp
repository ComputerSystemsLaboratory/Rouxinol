#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	while (1){
		cin >> n;
		if (n == 0) break;
		int ans = 0;
		string Step = "null";
		string nextStep;
		for (int i = 0; i < n; i++){
			cin >> nextStep;
			if (nextStep == "lu"){
				if (Step == "ru") ans++;
			}
			else if(nextStep == "ru"){
				if (Step == "lu") ans++;
			}
			else if (nextStep == "ld"){
				if (Step == "rd") ans++;
			}
			else if (nextStep == "rd"){
				if (Step == "ld") ans++;
			}
			Step = nextStep;
		}
		cout << ans << endl;
	}
	return 0;
}