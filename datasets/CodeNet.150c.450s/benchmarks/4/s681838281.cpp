#include <iostream>
using namespace std;


int main()
{
    int m, f, r;
    
    while(true)
    {
        cin >> m >> f >> r;
        if (m==-1 && f==-1 && r==-1)    break;

        char rank;
        int sum = m+f;
        if (m==-1 || f==-1)
        {
            rank = 'F';
        }
        else
        {
            if (sum>=80)                rank = 'A';
            else if (65<=sum && sum<80) rank = 'B';
            else if (50<=sum && sum<65) rank = 'C';
            else if (30<=sum && sum<50) rank = 'D';
            else                        rank = 'F';
            
            if (rank == 'D' && 50<=r)   rank = 'C';
        }
        cout << rank << endl;
    }
    
    return 0;
}