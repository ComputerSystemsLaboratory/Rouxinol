#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int ans_a[100],ans_b[100];
    int hit,blow;
    
    while (cin>>ans_a[0]>>ans_a[1]>>ans_a[2]>>ans_a[3]>>ans_b[0]>>ans_b[1]>>ans_b[2]>>ans_b[3]) {
        hit=0,blow=0;
        for (int i=0; i<4; i++) {
            if (ans_a[i]==ans_b[i]) {
                hit++;
            }
            else{
            for (int j=0; j<4; j++) {
                if(ans_a[i]==ans_b[j]) {
                    blow++;
                }
            }
            }
        }
        cout<<hit<<" "<<blow<<endl;
    }
    
    return 0;
}