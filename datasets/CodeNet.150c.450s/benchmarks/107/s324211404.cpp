#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int i=0,j=0,minnum;
    int L[1001][1001];
    for(i=0;i<1001;i++)
        L[0][i]=i;
    for(j=0;j<1001;j++)
        L[j][0]=j;
    for(i=1;i<=s1.size();i++)
        for(j=1;j<=s2.size();j++)
        {
            if(s1[i-1]==s2[j-1])
                L[i][j]=L[i-1][j-1];
            else   { 
                        minnum = min(L[i][j-1],L[i-1][j])+1;
                        L[i][j] = min(minnum,L[i-1][j-1]+1);
                   }
        }
    cout << L[s1.size()][s2.size()] << endl;
    return 0;
}
