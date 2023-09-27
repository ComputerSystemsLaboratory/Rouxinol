#include <cstdlib>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string str[2];

    for (int i = 0; i < 2; i++)
    {
        getline(cin, str[i]);
//        cout << "Input: " << str[i] << endl;
    }
    str[1] += ' ';


    int num = atoi(str[0].c_str());
//    cout << "Input Number: " << num << endl;

    long* a = new long[num];

    stringstream ss;
//    ss = stringstream(str[1]);
    ss << str[1];

    string buff;
    int n = 0;
    while (getline(ss, buff, ' '))
    {
        if (n >= num) break;

        a[n] = atoi(buff.c_str());
//        cout << "Input Number: " << a[n] << endl;

        n++;
    }


    for (int x = 0; x < num - 1; x++)
    {
        for (int y = 0; y < num - 1 - x; y++)
        {
            if (a[y] > a[y+1])
            {
                swap(a[y], a[y+1]);
            }
        }

//        for (int i = 0; i < num; i++)
//        {
//            cout << "Step " << x << ": " << a[i] << endl;
//        }

    }


    long min = a[0];
    long max = a[num - 1];
    long long sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += a[i];
//        cout << "Sorted Number: " << a[i] << endl;
    }

    delete [] a;

    cout << min << " " << max << " " << sum << endl;

    return 0;
}

