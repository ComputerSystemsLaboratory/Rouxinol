#include<stdio.h>
#include<string.h>
#include<map>
#include <iostream>
using namespace std;
map<string,int> mymap;

int main()
{
    int n;
    string s,word;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
    cin>>s>>word;
            if(s=="insert")
            {
                mymap[word]=1;
            }
            else if(s=="find")
            {
               if(mymap[word]==1)
                {
                    printf("yes\n");
                }
                if(mymap[word]!=1)
                {
                    printf("no\n");
                }
            }
    }
}