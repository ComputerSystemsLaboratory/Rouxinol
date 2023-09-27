#include <cstdio>
#include<algorithm>
#include<iostream>


using namespace std;

int main()
{
int a[10];
int k;
for(int i=0;i<10;i++)
{
    cin>>a[i];
    //a.push_back(k);

}
sort(a,a+10);
for(int j=9;j>=7;j--)
    cout<<a[j]<<endl;
    return 0;
}