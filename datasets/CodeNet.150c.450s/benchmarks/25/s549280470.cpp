#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char a;
    int count[26] = { 0 };
    a = getchar();
    while (a != EOF)
	{
        if ('a' <= a && a <= 'z')
		{
			count[a- 'a']++;
		}
        if ('A' <= a && a <= 'Z')
		{
			count[a- 'A']++;
		}
        a = getchar();
    }
    for (int i=0 ; i < 26 ; i++)
	{
        cout<<char(i + 'a')<<" : "<<count[i]<<endl;
    }
	return 0;
}