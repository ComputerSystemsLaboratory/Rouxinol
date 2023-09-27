
#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int h;
	int d[15][10];

	
	while (cin >> h && h){

		for (int i = 0; i < h; i++){
			for (int j = 0; j < 5; j++){
				cin >> d[i][j];
			}
		}

		int score = 0;
		bool ef = true;
		while (ef){
			ef = false;
			for (int i = 0; i < h; i++){
				int c = 0;
				vector<int> v;
				for (int j = 1; j < 5; j++){
					if (d[i][j] && d[i][j] == d[i][j - 1]){
						c++;
						if (c == 2){
							for (int k = j; k >= j - 2; k--){
								v.push_back(k);
							}
						}
						if (c > 2){
							v.push_back(j);
						}
					}
					else{
						c = 0;
					}
				}
				if (v.size())ef = true;
				for (int j = 0; j < v.size(); j++){
					score += d[i][v[j]];
					d[i][v[j]] = 0;
				}
			}

			bool f = true;
			while (f){
				f = false;
				for (int i = 0; i < h - 1; i++){
					for (int j = 0; j < 5; j++){
						if (d[i][j] && d[i + 1][j] == 0){
							d[i + 1][j] = d[i][j];
							d[i][j] = 0;
							f = true;
						}
					}
				}
			}
		}

		cout << score << endl;
	}

	return 0;
}