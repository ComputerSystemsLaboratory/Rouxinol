#include <iostream>
using namespace std;

int main()
{
    int low, high, num, c;

    cin >> low >> high >> num;

    c = 0;
    for(int i = low; i <= high; i++)
    {
        if( (num % i) == 0)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}