#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tmp,limit,count = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        limit = sqrt(tmp);
        for(int j = 2; j <= limit; j++)
        {
            if(tmp%j==0)
            {
                count++;
                break;
            }
        }
    }
    
    cout << n - count << endl;
    return 0;
}
