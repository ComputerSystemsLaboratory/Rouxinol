#include <iostream>
#include <string>
using namespace std;

int main()
{
		int i, j, n=0, ans=0;
		string W, T[10000], temp;
		cin >> W;
		while (1) {
				cin >> T[n];
				if (T[n]=="END_OF_TEXT") break;
				for (i=0; i<T[n].size(); i++) {
						T[n][i] = tolower(T[n][i]);
						if (isalpha(T[n][i])==false) {
								T[n][i] = '\0';
						}
				}
				n++;
		}

		for (i=0; i<n; i++) if (T[i]==W) ans+=1;
		cout << ans << "\n";
}