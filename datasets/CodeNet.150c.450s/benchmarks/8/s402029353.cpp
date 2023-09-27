#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string tarou, hanako;
	int score_ta = 0, score_ha = 0;

	for (int i = 0; i < n; i++) {
		cin >> tarou >> hanako;

		int maxlength = tarou.length() < hanako.length() ? tarou.length() : hanako.length();

		for (int j = 0; j < maxlength; j++) {
			if (tarou[j] > hanako[j]) {
				score_ta += 3;
				break;
			}
			else if (tarou[j] < hanako[j]) {
				score_ha += 3;
				break;
			}
			else if (tarou[j] == hanako[j]) {
				if (j == maxlength - 1 && tarou.length() == hanako.length()) {
					score_ta++;
					score_ha++;
					break;
				}
				else if(j == maxlength - 1 && tarou.length() > hanako.length()) {
					score_ta += 3;
					break;
				}
				else if (j == maxlength - 1 && tarou.length() < hanako.length()) {
					score_ha += 3;
					break;
				}
			}
		}
	}

	cout << score_ta << " " << score_ha << "\n";
}