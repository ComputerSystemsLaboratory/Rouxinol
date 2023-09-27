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
	int n;
    cin >> n;
    
    vector<int> a;
    a.push_back(0);
    a[0]=1;
    
    a.push_back(1);
    a[1]=1;
    
    for ( int i = 2; i <= n; i++ ) 
    {
        a.push_back(i);
        a[i] = a[i-2] + a[i-1];
    }
    
    cout << a[n] << endl;
}

int main()
{
	Solution();
	return 0;
}