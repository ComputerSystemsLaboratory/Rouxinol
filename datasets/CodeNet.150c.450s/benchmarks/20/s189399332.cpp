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

using namespace std;

void Solution()
{
    int n;
    
    cin>>n;
    
    cout<<n / 3600<<":"<<(n % 3600) / 60<<":"<<(n % 3600) % 60<<endl;
}



int main()
{
    Solution();
    return 0;
}