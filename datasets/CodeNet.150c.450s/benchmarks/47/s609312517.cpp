#include<iostream>
#include<algorithm>

using namespace std;

void Solution()
{
    int W, H, x, y , r;
    
    while(cin>>W>>H>>x>>y>>r)
    {
        if((y + r <= H && y + r >= 2 * r) && (x + r >= 2 * r && x + r <= W ))
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