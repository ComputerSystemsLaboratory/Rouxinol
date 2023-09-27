#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long int n,min,max,to;
    cin >> n;

    long int in;
    cin >> in;
    min = in;
    max = in;
    to = in;
    for(int i = 1;i < n;i++)
    {
        cin >> in;
        if(in < min)
        {
            min = in;
        }
        else if(in > max)
        {
            max = in;
        }
        to += in;
    }
    cout << min << " " << max << " " << to << endl;
}