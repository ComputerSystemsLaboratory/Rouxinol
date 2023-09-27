#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define vec vector

int main(void)
{
    while(1) {
	int n;
	cin >> n;
	if (!n) break;
	int cur = 0, ret = 0;
	int l = 0, r = 0;
	rep(i, n) {
	    string s;
	    cin >> s;
	    if (s == "lu") l = 1;
	    else if (s == "ru") r = 1;
	    else if (s == "ld") l = 0;
	    else r = 0;

	    if (cur == 0 && l == 1 && r == 1) {
		cur = 1;
		ret++;
	    } else if (cur == 1 && l == 0 && r == 0) {
		cur = 0;
		ret++;
	    }
	}
	cout << ret << endl;
    }
    return 0;
}


