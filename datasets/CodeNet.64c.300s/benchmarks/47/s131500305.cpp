// 2011/07/01 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int cnt[101] = {0};

	while(true){
		int num;
		cin >> num;
		if(cin.eof())
			break;

		cnt[num]++;
	}

	int max = 0;
	for(int i=1; i<=100; i++)
		if(cnt[i]>max)
			max = cnt[i];

	for(int i=1; i<=100; i++)
		if(cnt[i]==max)
			cout << i << endl;

	return 0;
}