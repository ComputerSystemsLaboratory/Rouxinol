#include <iostream>
#include<algorithm>
using namespace std;



int main()
{
    int hit[4]={},blow[4]={};
    while(cin>>hit[0]){
        int ans1=0,ans2=0;
        for(int i=1; i<4; i++){
            cin>>hit[i];
        }
        for(int i=0; i<4; i++){
            cin>>blow[i];
        }
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                if(hit[i]==blow[j]){
                    (i==j)?ans1++:ans2++;
                }
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}