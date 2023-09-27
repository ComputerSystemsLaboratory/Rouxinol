#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{	int n;
    cin>>n;
    int ac=0,wa=0,tle=0,re=0;
    while(n--)
    {	string str;
		cin>>str;
		if(str=="AC")	ac++;    	
    	else if(str=="WA")	wa++;
    	else if(str=="TLE") tle++;
    	else re++;
    }
    cout<<"AC x "<<ac<<"\n"<<"WA x "<<wa<<"\n"<<"TLE x "<<tle<<"\n"<<"RE x "<<re<<"\n";
    return 0;
}
