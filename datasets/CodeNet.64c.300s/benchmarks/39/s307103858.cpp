#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin>>n){
        int ans=0;
        for(int a=0; a<=9; a++){
            for(int b=0; b<=9; b++){
                for(int c=0; c<=9; c++){
                    int d=n-a-b-c;
                    if(0<=d&&d<=9) ++ans;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}