#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m,f,r;
    vector<char> g(0);
    for (int i=0; ; i++)
    {
        g.push_back(0);
        cin>>m>>f>>r;
        if (m==-1 && f==-1 && r==-1) break;
        if ((m==-1 || f==-1) || m+f<30) g[i]='F';
        else if ((m+f>=30 && m+f<50) && r<50) g[i]='D';
        else if (((m+f>=30 && m+f<50) && r>=50) || (m+f>=50 && m+f<65)) g[i]='C';
        else if (m+f>=65 && m+f<80) g[i]='B';
        else if (m+f>=80) g[i]='A';
    }
    for (int i=0; i<g.size()-1; i++)
    {
        cout<<g[i]<<'\n';
    }
    return 0;
}

