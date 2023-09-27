#include <iostream>
#include <string>
using namespace std;

int main()
{
		int n, i, j, t_c=0, h_c=0, t_l, h_l, m;
		bool draw=false;
		cin >> n;
		string t_s[n], h_s[n];
		for (i=0; i<n; i++) cin >> t_s[i] >> h_s[i];

		for (i=0; i<n; i++) {

				m = (t_s[i].size() < h_s[i].size())?(t_s[i].size()):(h_s[i].size());
				j = 0;
				while (draw==false || j<m+1) {
						if ((int)t_s[i][j] > (int)h_s[i][j]) {
								draw=false;
								t_c+=3;
								break;
						} else if ((int)t_s[i][j] < (int)h_s[i][j]) {
								draw=false;
								h_c+=3;
								break;
						} else draw=true;
						j++;
				}

				if (draw) {
						t_c++;
						h_c++;
				}
				draw = false;

		}

		cout << t_c << " " << h_c << "\n";
}