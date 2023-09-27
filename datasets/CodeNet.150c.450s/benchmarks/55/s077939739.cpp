#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i=0, count=1;
    char num[1001];
    std::vector<int> sum(10, 0);
    //*c = getchar(); だとできない
    cin>>num;

    while (1)
    {
        if (strcmp(num, "0")==0)
            break;

        for (int j = 0; j < std::strlen(num); j++)
        {
            sum[i] +=  num[j] - '0';
        }

/*これだとsegmentation error
        j=0;
        while (num[j]!='\n')
        {
            sum[i] +=  num[j] - '0';
            cout<<num[j] - '0'<<endl;
            j++;
        }
*/
        if (++i==count*10)
        {
            count++;
            sum.resize(count*10);
        }

        cin>>num;
        
    }

    for (int j = 0; j < i; j++)
        cout<<sum[j]<<endl;

    
    return 0;
}
