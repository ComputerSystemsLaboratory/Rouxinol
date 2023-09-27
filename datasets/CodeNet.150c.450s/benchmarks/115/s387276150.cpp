#include<iostream>
using namespace std;
#include<string>


int S[1001][1001];

void prep(string str1, string str2, int len1, int len2)
{
	int a, b, i;
	S[0][0] = 0;
	for(i = 1; i <= len1; i++){ S[i][0] = 0; }
	for(i = 1; i <= len2; i++){ S[0][i] = 0; }
	for(a = 1; a <= len1; a++){
		for(b = 1; b <= len2; b++){
			if(str1[a - 1] == str2[b - 1]){ S[a][b] = 1; }else{ S[a][b] = 0; }
		}
	}
	return;
}

int main()
{
	int i, a, b, q, len1, len2;
	cin >> q;
	string str1, str2;

	for(i = 0; i < q; i++){
		cin >> str1 >> str2;
		len1 = str1.size();
		len2 = str2.size();
		prep(str1, str2, len1, len2);
		for(a = 1; a <= len1; a++){
			for(b = 1; b <= len2; b++){
				if(S[a][b]){ S[a][b] = S[a - 1][b - 1] + 1; }
				else{ S[a][b] = max(S[a - 1][b], S[a][b - 1]); }
			}
		}
		cout << S[len1][len2] << endl;
	}
	return 0;
}