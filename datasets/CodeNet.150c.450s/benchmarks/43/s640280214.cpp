#include<iostream>
using namespace std;
#define MAX 10010

int main()
{
    int n;
    while(cin >> n)
    {
        if(n==0)break;
        int pointa=0, pointb =0;
        int carda,cardb;
        for(int i=0;i<n;i++)
        {
            cin >> carda >> cardb;
            if( carda > cardb ){pointa += (carda+cardb); continue;}
            else if( carda<cardb ){pointb += (carda+cardb); continue;}
            else
            {
                pointa += carda;
                pointb += cardb;
                continue;
            }
        }
        cout << pointa  << " " << pointb << endl;
    }

    return 0;
}