#include <iostream>
using namespace std;

int main()
{
	int i,j,num[3],tmp;
	
	cin >> num[0] >> num[1] >> num[2];
	
	for (i=0;i<3;i++)
	{
		for (j=i;j<3;j++)
		{
			if(num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	cout << num[0] << " "<< num[1] << " " << num[2] << endl;

	return 0;
}