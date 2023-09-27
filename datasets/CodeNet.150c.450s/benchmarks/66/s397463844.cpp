#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	int n,m;
	int i1,i2;
	string s;
	int open; // 0 close 1 open

	open = 0;
	cin >> n;
	vector<string> u(n);
	for(i1=0;i1<n;i1++){
		cin >> u[i1];
	}

	cin >> m;
	for(i1=0;i1<m;i1++){
		cin >> s;

		if (find(u.begin(),u.end(),s)==u.end()) {
			cout << "Unknown " << s << endl;
		}
		else{
			if (open==0){
				open = 1;
				cout << "Opened by " << s << endl;
			}
			else{
				open = 0;
				cout << "Closed by " << s << endl;
			}
		}
	}

	return 0;
}