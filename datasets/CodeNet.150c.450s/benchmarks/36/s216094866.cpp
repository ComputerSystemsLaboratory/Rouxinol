#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <ctime>
#include <iterator>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;


int main()
{
    int d;
    while(cin>>d)
    {
        long long res = 0;
        for(int c=0;c<600;c+=d)
        {
            res+= d*(c*c);
        }
        cout<<res<<endl;
    }
}