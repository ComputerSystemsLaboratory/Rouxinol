#include <iostream>
#include <queue>
#include <cctype>
#include <stdio.h>
#include <map>
#include <math.h>
 
 
using namespace std;
 
int main(int argc, char const* argv[])
{
    int e;
    while (cin >> e, e) 
    {
        int x,y,z;
        int m = 1000000;
 
        //for (int i = 0; i <= e; i++) 
        //{
        //    for (int j = 0; j*j <= e; j++) 
        //    {
        //        for (int k = 0; k*k*k <= e; k++) 
        //        {
        //            //cout << " x y z = " << i << j << k <<endl;
        //            if ( i + j*j + k*k*k == e) 
        //            {
        //                m = min( m, i + j + k);
        //            }
        //        }
        //    }
        //}
        for (int k = 0;  k*k*k <= e; k++) 
        {
            int j = sqrt(e - k*k*k);
            int i = e - k*k*k -j*j;
            m = min( m, i + j + k);
        }
        cout << m << endl;
    }
    return 0;
}