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
    string s1, s2;
    
    cin>>s1;
    cin>>s2;  // or cin>>s1>>s2;
    
    s1 = s1 + s1; // clockwise
    
    if(s1.find(s2) != string::npos)  // means can not find the matching words
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
  
int main()
{
    Solution();
    return 0;
}