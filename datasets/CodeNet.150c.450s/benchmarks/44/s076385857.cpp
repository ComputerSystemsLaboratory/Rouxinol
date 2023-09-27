#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[4], b[4];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
        int hit=0, blow=0;
        for(int i=0; i<4; i++){
            if(a[i]==b[i]){
                ++hit;
                continue;
            }
            for(int j=0; j<4; j++){
                if(i!=j&&b[i]==a[j]){
                    ++blow;
                    break;
                }

            }
        }
        cout<<hit<<' '<<blow<<'\n';
    }
    return 0;
}