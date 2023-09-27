#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;

    int s1[100], s2[100];

    cin >>n>>m;
    for(int i = 0;i<n;i++)
        cin >> s1[i];
    for(int i = 0;i<m;i++)
        cin >>s2[i];
        int c1= 0,c2=0;
        int count=0;
while(n && m)
{
    for(int i = 0;i<n;i++)
        for(int j= 0;j<m;j++)
    {
        int t = s1[i];
        s1[i] = s2[j];
        s2[j] = t;
        count++;
        int sum1 = 0;
        int sum2 = 0;
        for(int p = 0;p<n;p++)
            sum1 +=s1[p];
        for(int p = 0;p<m;p++)
            sum2 +=s2[p];
        if(sum1 == sum2)
            if(c1==0&&c2==0)
        {
            c1 = s2[j];
            c2 = s1[i];
        }

         else if(c1!=0 &&c2!=0 && c1+c2>s2[j]+s1[i])
        {
            c1 = s2[j];
            c2 = s1[i];
        }
        int a = s1[i];
        s1[i] = s2[j];
        s2[j] = a;

    }
    if(c1 !=0 &&c2!=0)
        cout <<c1<<" "<<c2<<endl;
    else
        cout <<-1<<endl;
cin >>n>>m;
    for(int i = 0;i<n;i++)
        cin >> s1[i];
    for(int i = 0;i<m;i++)
        cin >>s2[i];
         c1= 0,c2=0;
         count=0;
}
}

