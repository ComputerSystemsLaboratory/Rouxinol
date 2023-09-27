#include <iostream>
#include <string>

using namespace std;

int n;

int mcxi2int(string str,int pt)
{
	if( pt >= str.size() )
		return 0;
	if( str[pt] >= '2' && str[pt] <= '9' )
		pt++;

	int d;

	if(str[pt] == 'm')
		d = 1000;
	else if(str[pt] == 'c')
		d = 100;
	else if(str[pt] == 'x')
		d = 10;
	else
		d = 1;

	if( pt-1 >= 0 && str[pt-1] >= '2' && str[pt-1] <= '9')
		return d*(str[pt-1]-'0') + mcxi2int(str, pt+1);
	else
		return d + mcxi2int(str, pt+1);
}

string int2mcxi(int k)
{
	int i = k;
	string str = "";

	if( i >= 1000 )
	{	
		if( i/1000 >= 2)
			str += '0' + i/1000;

		str += 'm';
	}

	i = i%1000;

	if( i >= 100 )
	{
		if( i/100 >= 2)
			str += '0' + i/100;

		str += 'c';
	}

	i = i%100;

	if( i >= 10 )
	{
		if( i/10 >= 2)
			str += '0' + i/10;

		str += 'x';
	}

	i = i%10;

	if( i >= 1 )
	{
		if( i >= 2)
			str += '0' + i;

		str += 'i';
	}
	

	return str;
}


int main()
{
	cin >> n;

	for( int i = 0; i < n; i++)
	{
		string mcxi1, mcxi2;

		cin >> mcxi1 >> mcxi2;

		string out = int2mcxi(mcxi2int(mcxi1, 0) + mcxi2int(mcxi2, 0));

		cout << out << endl;
	}

	return 0;
}