#include<iostream>
#include <string>
using namespace std;

int main(){
    while(1){
        int n,p;
        int flag=0;
        int have[50];
        //読み込み
        cin>>n>>p;
        int cup = p;
        if(n == 0 && cup==0){
            return 0;
        }

        for(int i=0; i<n; i++){
            have[i]=0;
        }

        for(int i=0;;i=(i+1)%n){
            if(cup==0){
                cup = have[i];
                have[i]=0;
            }else if(cup>0){
                have[i]++;
                cup--;
                if(have[i]==p){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}

