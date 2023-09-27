#include<iostream>
#include<algorithm>

using namespace std;

void Solution()
{
    int a[3];
    
    while(cin>>a[0]>>a[1]>>a[2])
    {
        sort(a, a + 3);
       
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }
}

int main()
{
    Solution();
}