#include <iostream>
#include <string>

using namespace std;

//0027
int main(){
	int days[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	string week[7] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	int m, d;
	while(cin >> m >> d, m||d){
		int ans = 0;
		for(int i=1; i<m; ++i){
			ans += days[i-1];
		}
		ans += d;

		ans = ans % 7;
		cout << week[ans] <<endl;

	}
}