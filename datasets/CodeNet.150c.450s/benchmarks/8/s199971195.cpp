#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, Tpoint = 0, Hpoint = 0,SmallSize = 0;
	string Tarou, Hanako;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> Tarou >> Hanako;
		//文字数の小さいほう
		SmallSize = (Tarou.size() < Hanako.size()) ? Tarou.size() : Hanako.size();

		for (int j = 0; j < SmallSize; j++) {
			if (Tarou == Hanako) {//同じ単語で引き分け
				Tpoint++, Hpoint++;
				break;
			}
			else if (Tarou[j] < Hanako[j]) {//花子勝ち
				Hpoint += 3;
				break;
			}
			else if (Hanako[j] < Tarou[j]) {//太郎勝ち
				Tpoint += 3;
				break;
			}
			else if (j + 1 == SmallSize) {//文字数短いほうに達したら
				(SmallSize == Tarou.size()) ? Hpoint += 3 : Tpoint += 3;
			}
		}
	}

	cout << Tpoint << " " << Hpoint << endl;

	return 0;
}
