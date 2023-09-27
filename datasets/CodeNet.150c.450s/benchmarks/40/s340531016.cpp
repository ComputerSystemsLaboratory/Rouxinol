#include <iostream>
#include <string>

using namespace std;


int north(int front) {
	switch (front)
	{
	case 1:
		front = 5;
		break;
	
	case 2:
		front = 13;
		break;
	
	case 3:
		front = 17;
		break;
	
	case 4:
		front = 9;
		break;
	
	case 5:
		front = 21;
		break;
	
	case 6:
		front = 14;
		break;
	
	case 7:
		front = 3;
		break;
	
	case 8:
		front = 12;
		break;
	
	case 9:
		front = 22;
		break;
	
	case 10:
		front = 6;
		break;

	case 11:
		front = 2;
		break;

	case 12:
		front = 20;
		break;

	case 13:
		front = 24;
		break;

	case 14:
		front = 18;
		break;

	case 15:
		front = 4;
		break;

	case 16:
		front = 8;
		break;

	case 17:
		front = 23;
		break;

	case 18:
		front = 10;
		break;

	case 19:
		front = 1;
		break;

	case 20:
		front = 16;
		break;

	case 21:
		front = 19;
		break;

	case 22:
		front = 15;
		break;

	case 23:
		front = 7;
		break;

	case 24:
		front = 11;
		break;
	
	}

	return front;
}
int south(int front) {
	switch (front)
	{
	case 1:
		front = 19;
		break;

	case 2:
		front = 11;
		break;

	case 3:
		front = 7;
		break;

	case 4:
		front = 15;
		break;

	case 5:
		front = 1;
		break;

	case 6:
		front = 10;
		break;

	case 7:
		front = 23;
		break;

	case 8:
		front = 16;
		break;

	case 9:
		front = 4;
		break;

	case 10:
		front = 18;
		break;

	case 11:
		front = 24;
		break;

	case 12:
		front = 8;
		break;

	case 13:
		front = 2;
		break;

	case 14:
		front = 6;
		break;

	case 15:
		front = 22;
		break;

	case 16:
		front = 20;
		break;

	case 17:
		front = 3;
		break;

	case 18:
		front = 14;
		break;

	case 19:
		front = 21;
		break;

	case 20:
		front = 12;
		break;

	case 21:
		front = 5;
		break;

	case 22:
		front = 9;
		break;

	case 23:
		front = 17;
		break;

	case 24:
		front = 13;
		break;
	}
	return front;
}
int west(int front) {
	switch (front)
	{
	case 1:
		front = 10;
		break;

	case 2:
		front = 6;
		break;

	case 3:
		front = 14;
		break;

	case 4:
		front = 18;
		break;

	case 5:
		front = 9;
		break;

	case 6:
		front = 22;
		break;

	case 7:
		front = 15;
		break;

	case 8:
		front = 4;
		break;

	case 9:
		front = 17;
		break;

	case 10:
		front = 23;
		break;

	case 11:
		front = 7;
		break;

	case 12:
		front = 3;
		break;

	case 13:
		front = 17;
		break;

	case 14:
		front = 21;
		break;

	case 15:
		front = 19;
		break;

	case 16:
		front = 1;
		break;

	case 17:
		front = 13;
		break;

	case 18:
		front = 24;
		break;

	case 19:
		front = 11;
		break;

	case 20:
		front = 2;
		break;

	case 21:
		front = 12;
		break;

	case 22:
		front = 20;
		break;

	case 23:
		front = 16;
		break;

	case 24:
		front = 8;
		break;

	}
	return front;
}
int east(int front) {
	switch (front)
	{
	case 1:
		front = 16;
		break;

	case 2:
		front = 20;
		break;

	case 3:
		front = 12;
		break;

	case 4:
		front = 5;
		break;

	case 5:
		front = 13;
		break;

	case 6:
		front = 2;
		break;

	case 7:
		front = 11;
		break;

	case 8:
		front = 24;
		break;

	case 9:
		front = 5;
		break;

	case 10:
		front = 1;
		break;

	case 11:
		front = 19;
		break;

	case 12:
		front = 21;
		break;

	case 13:
		front = 17;
		break;

	case 14:
		front = 3;
		break;

	case 15:
		front = 7;
		break;

	case 16:
		front = 23;
		break;

	case 17:
		front = 9;
		break;

	case 18:
		front = 4;
		break;

	case 19:
		front = 15;
		break;

	case 20:
		front = 22;
		break;

	case 21:
		front = 14;
		break;

	case 22:
		front = 6;
		break;

	case 23:
		front = 10;
		break;

	case 24:
		front = 18;
		break;

	}
	return front;
}

int dice(string order) {

	int front = 1;
	for (unsigned int i = 0; i < order.size(); i++)
	{
		switch (order.at(i))
		{
		case 'N':
			front = north(front);
			//cout << order.at(i) << ": " << front << endl;
			break;

		case 'S':
			front = south(front);
			//cout << order.at(i) << ": " << front << endl;
			break;

		case 'E':
			front = east(front);
			//cout << order.at(i) << ": " << front << endl;
			break;

		case 'W':
			front = west(front);
			//cout << order.at(i) << ": " << front << endl;
			break;
		}
	}

	if (front == 1 || front == 2 || front == 3 || front == 4)
	{
		front = 1;
	}

	else if (front == 5 || front == 6 || front == 7 || front == 8)
	{
		front = 2;
	}

	else if (front == 9 || front == 10 || front == 11 || front == 12)
	{
		front = 3;
	}
	
	else if (front == 13 || front == 14 || front == 15 || front == 16)
	{
		front = 4;
	}

	else if (front == 17 || front == 18 || front == 19 || front == 20)
	{
		front = 5;
	}

	else front = 6;

	return front;
}


int main() {

	int faces[7];
	for (int i = 1; i < 7; i++)
	{
		cin >> faces[i];
	}

	string order;
	cin >> order;

	cout << faces[dice(order)] <<endl;

	return 0;
}