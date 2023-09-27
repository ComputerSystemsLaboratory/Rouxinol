#include <iostream>
#include <vector>

using namespace std;

void outputVector(const vector<int> &array, const char delim = ' ')
{
	for(size_t i = 0; i < array.size(); i++)
	{
		if(i != 0){ cout << delim; }
		cout << array[i];
	}
	cout << endl;
}


int main()
{
    int r, c;
    cin >> r >> c;

    typedef vector<int> VI;
    vector<VI> v(r + 1, VI(c + 1, 0));

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            v[i][c] += v[i][j];
            v[r][j] += v[i][j];
        }
        v[r][c] += v[i][c];
    }
    for(int i = 0; i <= r; i++)
    {
        outputVector(v[i]);
    }
    return 0;
}