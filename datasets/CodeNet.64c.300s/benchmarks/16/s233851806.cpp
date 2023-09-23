#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main()
{
    int n,m = INT_MIN;
    long int rm;
    cin >> n >> rm;
    for(int i = 1;i < n;i++)
    {
         long int r;
         cin >> r;
         if(r - rm > m)
         {
             m = r - rm;
         }
         if(rm > r)
         {
             rm  = r;
         }
    }
    cout << m << endl;
}