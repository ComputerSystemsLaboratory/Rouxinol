#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);
	int n = s1.size(), m = s2.size(),j;
	for (int i = 0; i < n; i++){
		if (s2[0] == s1[i])
		{
			int k = i;
			for (j = 0; j < m; j++){
				
				if (s2[j] != s1[k])
					break;
				k++;
				if (k == n)
					k = 0;
				
			}
			if (j == m)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}