#include <iostream>
#include <string>
using namespace std;
int result[200] = { 0 };
int main(){
	int num;
	while (cin>>num)
	{
		string before[1000], after[1000];
		string answer = "";
		if (num == 0)break;

		for (int i = 0; i < num; i++)
		{
			cin >> before[i] >> after[i];

		}

		int a;
		cin >> a;

		for (int i = 0; i < a; i++)
		{
			string ch;
			cin >> ch;
			for (int j = 0; j < num; j++)
			{
				if (ch == before[j])
				{				
					ch = after[j];
					break;
				}
			}
			answer += ch;
		}



			cout << answer << endl;

	}
}