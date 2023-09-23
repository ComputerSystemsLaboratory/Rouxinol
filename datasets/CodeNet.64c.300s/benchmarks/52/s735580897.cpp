#include <iostream>
using namespace std;

int count=0;
void searchComb(int n, int s, int minimum);

int main()
{
    int n,s;

    while (cin >> n >> s)
    {
        count=0;
        if(n==0 && s==0)
        {
            break;
        }
        searchComb(n, s, 0);
        cout << count << endl;
    }
    return 0;
}


void searchComb(int n, int s, int minimum)
{
    if(n<=0)
    {
        if(s==0)
        {
            count++;
        }

        return;
    }

    for(int i= minimum; i<10; i++)
    {
        if(s-i >= 0)
        {
            searchComb(n-1, s-i, i+1);
        }
    }
}