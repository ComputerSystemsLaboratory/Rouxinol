#include <iostream>

using namespace std;

int buf[101][101] = {0};

int main(int argc, const char * argv[])
{
	int r, c;
	cin >> r >> c;

	// read
	for(int row = 0; row < r; ++row)
	{
		for(int column = 0; column < c; ++column)
		{
			cin >> buf[row][column];
		}
	}

	// calculate
	for(int row = 0; row < r; ++row)
	{
		for(int column = 0; column < c; ++column)
		{
			buf[row][c] += buf[row][column];
		}
	}
	for(int column = 0; column < c + 1; ++column)
	{
		for(int row = 0; row < r; ++row)
		{
			buf[r][column] += buf[row][column];
		}
	}
	
	// write
	for(int row = 0; row < r + 1; ++row)
	{
		for(int column = 0; column < c + 1; ++column)
		{
			cout << buf[row][column];
			if(column != c)
			{
				cout << " ";
			}
			else
			{
				cout << endl;
			}
		}
	}
	
    return 0;
}