#include <iostream>
using namespace std;

int main() {
	int n[5],tmp;
	scanf("%d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4]);
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<4-i; j++)
		{
			if (n[j]<n[j+1])
			{
				tmp = n[j];
				n[j] = n[j+1];
				n[j+1] = tmp;
			}
		}
	}
	cout << n[0] << " " << n[1] << " " << n[2] << " " << n[3] << " " << n[4] << endl;
	return 0;
}