#include<iostream>

using namespace std;

void Solution()
{
    int a, b, c;
    
    while(cin>>a>>b>>c)
    {
        if(a < b && b < c) 
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl; 
        }
       
    }
}

int main()
{
    Solution();
}