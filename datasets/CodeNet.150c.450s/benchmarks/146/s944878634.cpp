#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        long double x[4],y[4],s,t;
        cin >> x[0] >>y[0] >>x[1] >>y[1] >>x[2] >>y[2] >>x[3] >>y[3];
        s = (y[1]-y[0])*(x[3]-x[2]);
        t = (y[3]-y[2])*(x[1]-x[0]);
       // if ((abs((y[0]-y[1])/(x[0]-x[1]))) == (abs((y[2]-y[3])/(x[2]-x[3]))))
        if (s == t)
        {
          cout <<"YES" <<endl; 
        } else
        {
          cout <<"NO" <<endl;
        }  
    }
 
     
    return 0;
}