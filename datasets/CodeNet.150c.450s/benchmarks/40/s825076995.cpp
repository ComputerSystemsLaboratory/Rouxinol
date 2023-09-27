#include<iostream>
#include<string>

using namespace std;

class Dice {
private:
	int label[6];

public:
	Dice() {}

	void set_label(int i)
	{
		cin >> label[i];
	}
	void action(char s) 
	{
		int temp;
		if (s == 'N')
		{
			temp = label[0];
			label[0] = label[1];
			label[1] = label[5];
			label[5] = label[4];
			label[4] = temp;
		}
		if (s == 'E')
		{
			temp = label[0];
			label[0] = label[3];
			label[3] = label[5];
			label[5] = label[2];
			label[2] = temp;
		}
		if (s == 'W')
		{
			temp = label[0];
			label[0] = label[2];
			label[2] = label[5];
			label[5] = label[3];
			label[3] = temp;
		}
		if (s == 'S')
		{
			temp = label[0];
			label[0] = label[4];
			label[4] = label[5];
			label[5] = label[1];
			label[1] = temp;
		}
	}
	void print()
	{
		cout << label[0] << "\n";
	}
};

int main()
{
	Dice One;

	for (int i = 0; i < 6; i++) {
		One.set_label(i);
	}

	string order;
	cin >> order;

	for (int i = 0; i < order.length(); i++) {
		One.action(order[i]);
	}
	
	One.print();
}