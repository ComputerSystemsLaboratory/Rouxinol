#include <bits/stdc++.h>
using namespace std;

int main()
{
	const int updn[] = {3, 0};
	
	int n;
	while (scanf("%d", &n), n){
		int res = 0;
		int state = 0;
		for (int i = 0; i < n; i++){
			string str;
			cin >> str;
			if (str == "lu") state += 1;
			if (str == "ru") state += 2;
			if (str == "ld") state -= 1;
			if (str == "rd") state -= 2;
			
			if (state == updn[res % 2]) res++;
		}
		
		cout << res << endl;
	}
	
	return 0;
}