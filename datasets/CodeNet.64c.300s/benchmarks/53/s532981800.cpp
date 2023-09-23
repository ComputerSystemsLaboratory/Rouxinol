	#include <iostream>
	using namespace std;
	
	int main()
	{
		int start, end, num;
		cin >> start >> end >> num;
		int cnt = 0;
		for (int i=start; i<=end; i++)
		{
			if (num % i == 0)		
			{
				cnt++;
			}
		}
		cout << cnt << endl;
		
		return 0;
	}