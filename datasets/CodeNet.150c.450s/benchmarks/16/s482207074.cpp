#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <deque>

using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	list <double> l;
	list <double> ans;
	list <double>::iterator li;
	list <double>::iterator li2;
	list <double>::iterator fromli;
	list <double>::iterator endli;

	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++){
		char c = s[i];
		if (c == '\\'){
			l.push_back(-1);
		}
		else if (c == '/'){
			l.push_back(-2);
		}
		else{
			l.push_back(-3);
		}
	}
	bool flag;
	bool loopflag;
	do{
		loopflag = false;
		flag = false;
		for (li = l.begin(); li != l.end(); li++){
			if (*li == -1){
				fromli = li;
				flag = true;
			}
			else if (*li == -2 && flag){
				loopflag = true;
				endli = li;
				for (li2 = fromli; li2 != endli; li2++){
					if (*li2 == -3){
						*li2 = 1;
					}
					else if (*li2 > 0){
						*li2 += 1;
					}
				}
				*fromli = 0.5;
				*endli = 0.5;
				break;
			}
		}
	}while(loopflag);

	double sum = 0;
	for (li = l.begin(); li != l.end(); li++){
		if (*li > 0){
			sum += *li;
		}
	}
	cout <<(long long int) sum << endl;
	bool start = false;
	for (li = l.begin(); li != l.end(); li++){
		if (*li < 0){
			continue;
		}
		if (*li == 0.5){
			start = !start;
			if (start){
				ans.push_back(*li);
			}
		}
		if (start){
			ans.back() += *li;
		}
	}
	cout << ans.size();
	for (li = ans.begin(); li != ans.end(); li++){
		cout << " " <<(long long int) *li;
	}
	cout << endl;

return 0;
}