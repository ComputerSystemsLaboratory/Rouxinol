
#include<iostream>
using namespace std;

int main()
{
    while(1){
        int N,ans=0;
        cin>>N;
        if(N==0)
            break;
        for(int i=2;i*i/2<N;i++){
            if(i%2==0){
                if(N%i==i/2)
                    ans++;
            }
            if(i%2==1){
                if(N%i==0)
                    ans++;
            }
        } cout<<ans<<endl;
    }
    return 0;
}