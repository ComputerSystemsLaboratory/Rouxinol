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
    char n;
    int count[26]={0};
     
    while (cin>>n) 
    {
        if(isalpha(n)) //if n is alphabet, then change all to the lowercase
        {
            n = tolower(n);
        }
        
        count[n -'a']++; //change to integer
    }
    
    for(int i=0; i<26; i++) 
    {
       cout<<(char)(i + 'a')<<" : "<<count[i]<<endl; // (char)(i + 'a') can change to char
    }     
}
  
int main()
{
    Solution();
    return 0;
}