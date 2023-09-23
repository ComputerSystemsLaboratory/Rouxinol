#include <iostream>

using namespace std;
int main()
{
    int N;
    int n;
    while(true)
    {
        cin>>N;
        if(N==0)
        {
            break;
        }
        int i=0;
        for(int a=1;a<N;a++)
        {   
            n=0;
            for(int b=a;n<N;b++)
            {
                n=n+b;
                if(n==N)
                {
                    i=i+1;
                }
            }
        }
        cout<<i<<endl;
            
    }
}