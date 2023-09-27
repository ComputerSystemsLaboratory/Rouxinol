#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


//vector<string> ans;

int main()
{

	while(1){
		int n, m, c = 0;
		string h, r, a, str;
		vector<string> vec, ch;
		vector<string> ango;

		cin >> n;
		if(n == 0)break;
		for(int i = 0; i < n; i++){
			cin >> h >> r;
			vec.push_back(h);
			ch.push_back(r);
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> a;
			ango.push_back(a);
		}

		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
					if(ango[i] == vec[j]){
						ango[i] = ch[j];
						break;
					}
			}
		}
		str = ango[0];

		for(int i = 1; i < m; i++)
			str += ango[i];
		cout << str << endl;
	}

/*	for(int i = 0; i < c; i++)
		cout << ans[i] << endl;*/

	return 0;
}