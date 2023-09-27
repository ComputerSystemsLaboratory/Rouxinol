#include <iostream>
//#include <algorithm>

using namespace std;

void sort(int* arr);

int main()
{
    int num, h, l, r;
    int line[3];

    cin >> num;

    for (int n = 0; n < num; n++)
    {
        cin >> line[0] >> line[1] >> line[2];

//        cout << "input:" << line[0] << " " << line[1] << " " << line[2] << endl;

        h = 0;
        l = 0;
        r = 0;

        sort(line);
        h = line[0];
//        h = *max_element(line, line + num);
//        cout << "max:" << h << endl;

        for (int i = 0; i < 3; i++)
        {
            if (line[i] == h && l == 0)
            {
                l = line[i] * line[i];
            }
            else
            {
                r += line[i] * line[i];
            }
        }

//        cout << "left:" << l << endl;
//        cout << "right:" << r << endl;

        if (l == r)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

void sort(int* arr)
{
    for (int i = 0; i < 2; i++)
    {
        for (int n = 0; n < 2 - i; n++)
        {
            if (arr[n] < arr[n+1])
            {
                swap(arr[n], arr[n+1]);
            }
        }
    }
}

