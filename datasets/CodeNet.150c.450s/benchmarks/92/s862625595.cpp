/*************************************************************************
	> File Name: qq.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月21日 星期五 21时08分50秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int s[12];
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int ans=0,now=a+b;
        while(now)
        {
            now/=10;
            ans++;
        }
        cout<<ans<<endl;
    }
}

