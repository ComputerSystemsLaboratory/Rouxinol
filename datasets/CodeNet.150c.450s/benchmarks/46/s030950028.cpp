#include <iostream>
using namespace std;

int main(){
	int n[25565] = {0};
	int x[25565] = {0};
	int m[25565] = {0};
	int l;
	do{
		cin >> n[l] >> x[l];
		l++;
	}while(n[l-1] != 0 || x[l-1] != 0);
	l = 0;
	do{
		for (int i = 1; i <= n[l]-2; ++i)
		{
			for (int j = i + 1; j <= n[l]-1; ++j)
			{
				for (int k = j + 1; k <= n[l]; ++k)
				{
					if((i + j + k) == x[l]){
						m[l]++;
					}
				}
			}
		}
		l++;
	}while(n[l] != 0 && x[l] != 0);
	l = 0;
	do{
		cout << m[l] << endl;
		l++;
	}while(n[l] != 0 || x[l] != 0);
}