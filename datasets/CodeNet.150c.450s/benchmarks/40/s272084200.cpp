#include<iostream>
#include<string>

using namespace std;

int main()
{
	int label[6];
	string order;

	for (int i = 0; i < 6; i++) {
		cin >> label[i];
	}
	cin >> order;

	int temp;
	for (int i = 0; i < order.length(); i++) {
		if (order[i] == 'N')
		{
			temp = label[0];
			label[0] = label[1];
			label[1] = label[5];
			label[5] = label[4];
			label[4] = temp;
		}
		if (order[i] == 'E')
		{
			temp = label[0];
			label[0] = label[3];
			label[3] = label[5];
			label[5] = label[2];
			label[2] = temp;
		}
		if (order[i] == 'W') 
		{
			temp = label[0];
			label[0] = label[2];
			label[2] = label[5];
			label[5] = label[3];
			label[3] = temp;
		}
		if (order[i] == 'S')
		{
			temp = label[0];
			label[0] = label[4];
			label[4] = label[5];
			label[5] = label[1];
			label[1] = temp;
		}
	}
	cout << label[0] << "\n";
}