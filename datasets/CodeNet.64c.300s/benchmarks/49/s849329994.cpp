#include <iostream>

using namespace std;
int a,b;
int sum;
int digit;
int main()
{
    while(cin>>a>>b)
    {
        sum = a+b;
        while(sum>0)
        {
            sum/=10;
            digit++;
        }
        cout << digit;
        cout << endl;
        digit = 0;
    }
}