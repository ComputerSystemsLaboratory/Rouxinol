// 2019/05/02 Tazoe

#include <iostream>
using namespace std;

int cnt;

void DFS(int n, int s, int m)
{
	if(n==0 && s==0){
		cnt++;
		return;
	}

	if(n<=0)
		return;
	if(s<0)
		return;
	if(m>9)
		return;

	DFS(n-1, s-m, m+1);
	DFS(n, s, m+1);

	return;
}


int main()
{
	while(true){
		int n, s;
		cin >> n >> s;

		if(n==0 && s==0)
			break;

		cnt = 0;

		DFS(n, s, 0);

		cout << cnt << endl;
	}

	return 0;
}

