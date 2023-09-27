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
    string s;
    getline(cin, s);  //for input
    string outPut = "";
    
    for (int i=0; i < (int)s.size(); i++) 
    {
        if (isalpha(s[i])) {   //function for checking if s[i] is alphabet
            
            if (islower(s[i]))
            {
                outPut += toupper(s[i]);  //lower change to upper
            } 
            else if (isupper(s[i])) 
            {
                outPut += tolower(s[i]); //upper change to lower
            }
        } 
        else //if string is ',' '.'
        {
            outPut += s[i];
        }
    }
    
    cout << outPut << endl;   
}
 
int main()
{
    Solution();
    return 0;
}