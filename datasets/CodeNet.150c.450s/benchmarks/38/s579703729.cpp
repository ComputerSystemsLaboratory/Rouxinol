#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

#define doubled( x ) (x * x)

//?????°?????°?????? (in:??´??° out:?????°)
int digit_count(int num);

using namespace std;

int main()
{
	int N; cin >> N;
	vector<int> data(3);
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin >> data[j];
		}
		sort(data.begin(), data.end());
		
		if( ( doubled(data[0]) + doubled(data[1]) ) == doubled(data[2]) )cout << "YES";
		else cout << "NO";
		
		cout << endl;
	}
	return 0;
}

int digit_count(int num)
{
	if( num < 0 )num *= (-1);
	
	int count = 0;
	
	for(int i = 10; num != 0; i *= 10)
	{
		int diff = num % i;
		num -= diff;
		count++;
	}
		
	return count;
}