#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n)
    {
        int buf[5001]={};
        int max_sum = INT_MIN;

        /* store input values */
        for(int i=0; i<n; i++)
        {
            cin >> buf[i];
        }
        /* calc maximum sum */
        for(int i=0; i<n; i++)
        {
            int sum = 0;
            for(int j=i; j<n; j++)
            {
                sum += buf[j];
                if(sum > max_sum)
                {
                    max_sum = sum;
                }
            }
            
        }
        cout << max_sum << endl;
    }
    return 0;
}