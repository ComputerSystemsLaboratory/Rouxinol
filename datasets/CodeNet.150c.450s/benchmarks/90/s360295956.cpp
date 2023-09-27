//0028 Mode Value
//1`100ÌlªÅå100ñ^¦çêé
//ÅplðoÍ¹æ@¡ÌÅplª éêÍA¬³¢ÉoÍ¹æ

#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;

int main(void)
{
	const int N = 100;
	int a[N+1] = {};
	int i;
	while( cin >> i )
		a[i]++;

	int maxMode = numeric_limits<int>::min();
	for(i = 1; i <= N; i++)
		maxMode = max(maxMode, a[i]);
	for(i = 1; i <= N; i++)
	{
		if(a[i] == maxMode)
			cout << i << endl;
	}
	return 0;
}