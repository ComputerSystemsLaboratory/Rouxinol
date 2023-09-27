#include <iostream>

using namespace std;

bool judge(int num)
{
	if (num < 2)	return (false);
	if (num == 2)	return (true);
	if (num % 2 == 0)	return (false);
	for (int i = 3; i * i <= num; i += 2){
		if (num % i == 0)	return (false);
	}
	return (true);
}

int main()
{
	int n, num;
	int ct = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> num;
		if (judge(num))	ct++;
	}
	
	cout << ct << endl;
	return (0);
}