#include<bits/stdc++.h>
using namespace std;
#define M 1000000
#define NIL -1;
#define L 14
char H[M][L];

int h1(int key)
{
    return key%M;
}
int h2(int key)
{
    return (1+(key%(M-1)));
}
int h3(int key,int i)
{
    return(h1(key)+i*h2(key))%M;
}

int getChar(char ch)
{
    if(ch=='A') return 1;
    else if(ch=='C') return 2;
    else if(ch=='G') return 3;
    else if(ch=='T') return 4;
    else return 0;
}

long long getKey(char str[])
{
    long long sum=0,p=1,i;
    for(i=0;i<strlen(str);i++)
    {
        sum+=p*(getChar(str[i]));
        p*=5;
    }
    return sum;
}

int Insert(char str[])
{
    long long key,i,h;
    key=getKey(str);
    for(i=0;;i++)
    {
        h=(h1(key)+i*h2(key))%M;
        if(strcmp(H[h],str)==0) return 1;
        else if(strlen(H[h])==0)
        {
            strcpy(H[h],str);
            return 0;
        }
    }
    return 0;
}
int Find(char str[])
{
    long long key,i,h;
    key=getKey(str);
    for(int i=0;;i++)
    {
        h=(h1(key)+i*h2(key))%M;
        if(strcmp(H[h],str)==0) return 1;
        else if(strlen(H[h])==0) return 0;
    }
    return 0;
}

int main()
{
    int n,i;
    char cmd[9],str[L];
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>cmd>>str;
        if(cmd[0]=='i')
        {
            Insert(str);
        }
        else if(cmd[0]=='f')
        {
            if(Find(str))
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        }
    }

	return 0;
}
