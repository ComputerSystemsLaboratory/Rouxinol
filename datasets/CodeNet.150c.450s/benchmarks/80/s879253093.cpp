#include<algorithm>
#include<iostream>
#include<map>

#define MAX 1100


using namespace std;

struct Data
{
	int n1 , n2 , n3 , n4;
};


int main()
{
	Data data1 , data2;

	cin >> data1.n1 >> data1.n2 >> data1.n3 >> data1.n4;
	cin >> data2.n1 >> data2.n2 >> data2.n3 >> data2.n4;

	cout << max((data1.n1 + data1.n2 + data1.n3 + data1.n4) , (data2.n1 + data2.n2 + data2.n3 + data2.n4)) << endl;

	return 0;
}