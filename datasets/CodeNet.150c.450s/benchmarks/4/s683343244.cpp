#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<char> record;
    int m, f, r;

    while (true)
    {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1)
            break;

        if (m == -1 || f == -1)
        {
            record.push_back('F');
            continue;
        }
        else if (m + f >= 80)
        {
            record.push_back('A');
            continue;
        }
        else if (m + f < 80 && m + f >= 65)
        {
            record.push_back('B');
            continue;
        }
        else if (m + f < 65 && m + f >= 50)
        {
            record.push_back('C');
            continue;
        }
        else if (m + f < 50 && m + f >= 30)
        {
            if (r >= 50)
                record.push_back('C');
            else
                record.push_back('D');
            continue;
        }
        else
        {
            record.push_back('F');
        }
    }

    for (char c : record)
    {
        cout << c << endl;
    }

    return 0;
}