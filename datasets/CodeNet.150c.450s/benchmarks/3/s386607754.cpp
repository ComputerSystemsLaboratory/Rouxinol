#include <iostream>
//#include <iomanip>
//#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string p, a, c, ans, buf, rep;
	int n, b, e, cnt;

	cin >> p >> n;

	while (n--){
		cin >> a;

		if (a == "print"){
			cin >> b >> e;
			cnt = e - b;
			ans = p.substr(b, cnt + 1);
			cout << ans << endl;
		}
		else if (a == "reverse"){
			cin >> b >> e;
			cnt = e - b;
			buf = p.substr(b, cnt + 1);
			for (int i = 0; i <= cnt; i++){
				p[b + i] = buf[cnt - i];
			}
		}
		else if (a == "replace"){
			cin >> b >> e >> rep;
			cnt = e - b;
			for (int i = 0; i <= cnt; i++){
				p[b + i] = rep[i];
			}
		}

	}


	return 0;
}