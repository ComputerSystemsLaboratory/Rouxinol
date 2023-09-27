#include<iostream>
#include<string>
using namespace std;


int main(){
	int n;
	string a;
	string b;
	int counta = 0;
	int countb = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b ;
		//cout << a <<' '<< b << endl;
		if (a==b)
		{
			counta += 1;
			countb += 1;

		}
		else if (a>b)
		{
			counta += 3;
		}
		else if (a<b)
		{
			countb += 3;
		}

	}

	cout << counta << ' ' << countb << endl;





	return 0;
}