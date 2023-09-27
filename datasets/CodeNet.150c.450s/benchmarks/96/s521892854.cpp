#include <iostream>
#include <string>
#define R return

using namespace std;

char convert (int cnt, int num)
{
    int d;
    switch (num)
    {
    case 1:
        d=cnt%5;
        if (d==1) R '.';
        if (d==2) R ',';
        if (d==3) R '!';
        if (d==4) R '?';
        if (d==0) R ' ';
    case 2:
        d=cnt%3;
        if (d==1) R 'a';
        if (d==2) R 'b';
        if (d==0) R 'c';
    case 3:
        d=cnt%3;
        if (d==1) R 'd';
        if (d==2) R 'e';
        if (d==0) R 'f';
    case 4:
        d=cnt%3;
        if (d==1) R 'g';
        if (d==2) R 'h';
        if (d==0) R 'i';
    case 5:
        d=cnt%3;
        if (d==1) R 'j';
        if (d==2) R 'k';
        if (d==0) R 'l';
    case 6:
        d=cnt%3;
        if (d==1) R 'm';
        if (d==2) R 'n';
        if (d==0) R 'o';
    case 7:
        d=cnt%4;
        if (d==1) R 'p';
        if (d==2) R 'q';
        if (d==3) R 'r';
        if (d==0) R 's';
    case 8:
        d=cnt%3;
        if (d==1) R 't';
        if (d==2) R 'u';
        if (d==0) R 'v';
    case 9:
        d=cnt%4;
        if (d==1) R 'w';
        if (d==2) R 'x';
        if (d==3) R 'y';
        if (d==0) R 'z';
    }
}

int main()
{
    int n, c, p;
    string s, ans[200]={};
    cin>>n;
    for (int i=0; i<n; i++)
    {
        c=0; p=0;
        cin>>s;
        for (int j=0; j<s.size(); j++)
        {
            if (s[j]=='0' && p!=0) { ans[i]+=convert(c, p); c=0; p=0; }
            if (s[j]=='0' && p==0) { c=0; }
            else if (s[j]==p) { c++; }
            else { p=s[j]-48; c++; }
        }
    }
    for (int i=0; i<n; i++) cout<<ans[i]<<'\n';
    R 0;
}

