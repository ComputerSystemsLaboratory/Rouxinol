#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	scanf("%d", &n);

	while (n--){
		string train;
		set<string> s;

		cin >> train;

		int len = train.size();

		for (int i = 1; i < len; i++){
			string right_train = train.substr(i);
			string left_train = train.substr(0, i);

			string rev_right = train.substr(i);
			string rev_left = train.substr(0, i);
			
			reverse(rev_right.begin(), rev_right.end());
			reverse(rev_left.begin(), rev_left.end());

			s.insert(left_train + right_train);
			s.insert(right_train + left_train);
			s.insert(rev_left + right_train);
			s.insert(right_train + rev_left);
			s.insert(left_train + rev_right);
			s.insert(rev_right + left_train);
			s.insert(rev_left + rev_right);
			s.insert(rev_right + rev_left);
		}

		cout << s.size() << endl;
	}

	return (0);
}