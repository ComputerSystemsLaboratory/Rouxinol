#include <iostream>
#include <algorithm>
using namespace std;

bool SortComp(long long int num1, long long int num2) { return num1 > num2 ? true : false; }

int main(void)
{
	while(1)
	{
		int num, pebble, winner;
		cin>>num>>pebble;

		if(!num && !pebble)
			break;

		bool check= true;
		int arr[50]= {};
		while(check)
		{
			for(int i= 0; i < num; i++)
			{
				if(pebble == 0)
				{
					pebble+= arr[i];
					arr[i]= 0;
				}
				else
				{
					pebble--;
					arr[i]++;

					if(pebble == 0)
					{
						for(int j= 0; j < num; j++)
						{
							if(i == j)
								continue;

							if(arr[j] != 0)
							{
								check= false;
								break;
							}
						}
						if(check)
						{
							winner= i;
							check= false;
							break;
						}
						else
							check= true;
					}
				}
			}
		}
		cout<<winner<<endl;
	}
	return 0;
}