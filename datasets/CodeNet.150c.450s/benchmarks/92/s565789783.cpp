
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){
        int c=a+b;
        int i=0;
        while(c!=0){
            i++;
            c/=10;
        }
        cout<<i<<endl;
    }
    return 0;
}