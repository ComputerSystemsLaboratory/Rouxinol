#include <iostream>

using namespace std;

int main()
{
    int n[101]={0};
    int buf;
    while(cin>>buf)
    {
        n[buf]++;
    }
    int b=0;
    for(int i=0;i<101;++i){
        if(n[i]>b)b=n[i];
    }
    for(int i=0;i<101;++i){
        if(n[i]==b)cout<<i<<endl;
    }
    return 0;
}