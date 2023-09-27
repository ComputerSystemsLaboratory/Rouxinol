#include <iostream>
using namespace std;

int main()
{
	int n, s[100], i, max = 0, min = 1000, ave = 0;
	while(1)
	{
		cin >> n;
		if(n == 0){
			break;
		}
		for(i = 0; i < n; i++)
		{
			cin >> s[i];
			if(max < s[i]){
				max = s[i];
			}
			if(min > s[i]){
				min = s[i];
			}
		}
		
		for(i = 0; i < n; i++)
		{
			ave += s[i];
		}
		ave -= (max + min);
		ave /= (n - 2);
		
		cout << ave << endl;
		max = 0;
		min = 1000;
		ave = 0;
	}
	return 0;
}