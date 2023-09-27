#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,a,i,AC=0,TLE=0,RE=0,WA=0;
	cin>>n;
    string s;
    for(i=0;i<n;i++)
    {
    	cin>>s;
     	if(s=="WA")
    	{
    		WA++;}
    		else if(s=="TLE")
    		{
    			TLE++;
    		}
    		else if(s=="RE")
    		{
    			RE++;
    		}
    		else if(s=="AC")
    		{
    			AC++;
    		}
    }
    	cout<<"AC x "<<AC<<endl;
    	cout<<"WA x "<<WA<<endl;
    	cout<<"TLE x "<<TLE<<endl;
    	cout<<"RE x "<<RE<<endl;
	
	return 0;
}