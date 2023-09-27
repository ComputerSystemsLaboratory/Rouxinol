#include<iostream>
using namespace std;
int main(void)
{
    char str[21];
    int i=0;
    while(cin>>str[i])
    {
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<str[j];
    }
    cout<<endl;
    return 0;
}
