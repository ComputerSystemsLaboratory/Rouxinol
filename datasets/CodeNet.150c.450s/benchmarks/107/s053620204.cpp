#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s1[1001],s2[1001];
    int m[1001][1001],i,j;
    cin.getline(s1,1001);
    cin.getline(s2,1001);

    int x=strlen(s1);
    int y=strlen(s2);

    for(i=0;i<=x;++i)
    for(j=0;j<=y;++j)
       {
        if(i==0) m[i][j]=j;
        else if(j==0) m[i][j]=i;
        else if(s1[i-1]==s2[j-1]) m[i][j]=m[i-1][j-1];
        else m[i][j]=1+min(min(m[i][j-1],m[i-1][j]),m[i-1][j-1]);
       }

    cout<<m[x][y]<<'\n';

    return 0;
}