#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x, n, C=1, i=0;
    std::vector<int> data(10);
        
    cin>>n>>x;

    while(!((n==0)&&(x==0)))
    {
        int  count=0;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k < j; k++)
            {
                for (int l = 1; l < k; l++)
                {
                    if (j+k+l==x)   
                    {
                        count++;
                    }   
                }   
            }   
        }
        data[i] = count;
   
        cin>>n>>x;    

        if(++i==C*10)
        {
            C++;
            data.resize(count*10);
        }
    }

    for (int j = 0; j < i; j++)
    {
        cout<<data[j]<<endl;
    }


    return 0;
}
