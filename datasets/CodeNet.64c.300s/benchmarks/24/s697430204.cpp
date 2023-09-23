#include<iostream>

using namespace std;

int main()
{
	int kai,abe,isazi,abesum,isazisum;

	cin >> kai;
	while (kai!=0)
	{
		abesum = isazisum = 0;
		for (int i = 0; i < kai; i++)
		{
			cin >> abe;
			cin >> isazi;
			if (abe > isazi)
			{
				abesum += abe + isazi;
			}
			else if (abe<isazi)
			{
				isazisum += abe + isazi;
			}
			else if (abe == isazi)
			{
				abesum += abe;
				isazisum += isazi;
			}
		}
		cout << abesum << " " << isazisum << endl;
		cin >> kai;
	}

	return 0;
}