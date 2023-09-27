#include<iostream>

using namespace std;

void Solution()
{
    int a, b;
    
    while(cin>>a>>b)
    {
        if(a > b)
        {
            cout<<"a > b"<<endl;
        }
        else if(a < b)
        {
            cout<<"a < b"<<endl; 
        }
        else if(a == b)
        {
            cout<<"a == b"<<endl;
        }
    }
}

int main()
{
    Solution();
}