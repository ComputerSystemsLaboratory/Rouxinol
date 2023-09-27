#include <iostream>
#include <string>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;


int days[] = {0,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string week[] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
 
int main()
{
	int m, d;
    while(cin >> m >> d && m && d)
    {
        int sum = 0;
        rep(i,m)
        {
            sum += days[i];
        }
        sum += d;
        cout << week[(sum)%7] << endl;
    }

    return 0;
}