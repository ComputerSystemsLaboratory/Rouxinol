#include <iostream>
using namespace std;

const char grade(int m, int f, int r)
{
    int s = m+f;
    if(m == -1 || f == -1)
    {
        return 'F';
    }
    else if(s >= 80)
    {
        return 'A';
    }
    else if(s >= 65 && s < 80)
    {
        return 'B';
    }
    else if(s >= 50 && s < 65)
    {
        return 'C';
    }
    else if(s >= 30 && s < 50)
    {
        if(r >= 50)
        {
            return 'C';
        }
        return 'D';
    }
    else if(s < 30)
    {
        return 'F';
    }

	return 'E';
}

int main()
{
    int m, f, r;

    while(true)
    {
        cin >> m >> f >> r;
        if(m == -1 && f == -1 && r == -1)
            break;
        cout << grade(m, f, r) << endl;
    }

    return 0;
}