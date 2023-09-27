#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
    int h,m,s;
    
    while(cin >> s)
    {
        m = s/60;
        s = s%60;
        h = m/60;
        m = m%60;
        
        cout << h << ":" << m << ":" << s << endl;
    }
    
}