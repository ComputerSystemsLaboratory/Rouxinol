#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
//#define B
#define C

#ifdef A
int main(void)
{
	int a, b;
	cin >> a >> b;
	cout << a / b << " " << a %b << " ";
	printf("%f\n", static_cast<double>(a) / b);
	return 0;
}


#endif // A

#ifdef B
#define PI 3.141592653589f
int main(void)
{
	double r;
	cin >> r;
	printf("%.6f %.6f\n",r * 2 * PI, PI * r * r);
	return 0;
}
#endif // B


#ifdef C
#define _MAX 2000

void add(std::pair<int, int> &a) { cout << a.first + a.second << endl; }
void sub(std::pair<int, int> &a) { cout << a.first - a.second << endl; }
void mul(std::pair<int, int> &a) { cout << a.first * a.second << endl; }
void les(std::pair<int, int> &a) { cout << a.first / a.second << endl; }

int main(void)
{
	char op;
	pair<int, int> dis;
	vector<pair<int, int> > arr_num(_MAX);
	vector<char> arr_c(_MAX);

	op = 0;
	//arr_c[0] =0 ;


	for (size_t i = 0; i < _MAX && op != '?'; i++)
	{
		cin >> dis.first >> op >> dis.second;

		arr_num[i] = dis;
		arr_c[i] = op;
	}

	for (size_t i = 0; i < _MAX && arr_c[i] != '?'; ++i)
	{
		switch (arr_c[i])
		{
		case '+':
			add(arr_num[i]);
			break;

		case '-':
			sub(arr_num[i]);
			break;
		case '/':
			les(arr_num[i]);
			break;
		case '*':
			mul(arr_num[i]);
			break;
		}

	}



	return 0;
}
#endif // C

#ifdef D
int main(void)
{
	return 0;
}

#endif // D