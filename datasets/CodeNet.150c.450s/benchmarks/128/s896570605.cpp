#include<iostream>
using namespace std;

int main()
{
    char str[21];
    int i;
    cin>>str;
    for(i=0;str[i]!='\0';)
        i++;
    for(int k=i-1;k>=0;k--)
    {
        cout<<str[k];
    }
    cout<<endl;
    return 0;
}