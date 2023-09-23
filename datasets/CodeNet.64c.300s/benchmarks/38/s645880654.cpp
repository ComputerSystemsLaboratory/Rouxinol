#include <iostream>
using namespace std;

int array[10];
int n;
int i,j;
bool ans;

void dfs(int de,int b,int c)
{
	ans = false;

		if(de >= 10){
			ans = true;
			return;
		}

		if(b < array[de])
			dfs(de+1,array[de],c);
		if(c < array[de])
			dfs(de+1,b,array[de]);
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
	for(j=0; j<10; j++)
		cin >> array[j];

		dfs(0,0,0);

	if(ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	}

	return 0;
}