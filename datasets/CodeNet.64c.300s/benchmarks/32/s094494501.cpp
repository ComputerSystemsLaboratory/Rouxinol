#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstdlib>
#include<iomanip>
#include<queue>
#include<set>
#include <valarray>
#include<stack>
#include<sstream>
#include<math.h>

using namespace std;

void Solution()
{
    long int a;
    
    cin>>a;
    
    int b[10000] = {0};
    long int sum = 0;
    
    for (int i = 0; i < a; i++)
    {
        cin>>b[i];
        
        sum = sum + b[i];
    }
    
    sort(b, b + a);
    cout<<b[0]<<" "<<b[a - 1]<<" "<<sum<<endl;
}

int main()
{
    Solution();
    return 0;
}