
#include<iostream>
using namespace std;

int main()
{
    int n,a;
    while(cin>>n)
    {
        int x=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                for(int k=0;k<10;k++){
                    a=n-i-j-k;
                    if(a>=0&&a<=9)
                        x++;
                }
            }
        }
        cout<<x<<endl;
    }
    return 0;
}