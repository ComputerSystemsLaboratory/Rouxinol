#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        int Y, M, D;
        cin>> Y>> M>> D;
        int ans=0;
        for(int y=1; y<=Y; y++){
            if(y==Y){
                for(int m=1; m<=M; m++){
                    if(m==M){
                        for(int d=1; d<=D; d++){
                            ans++;
                        }
                    }else{
                        if(y%3==0){
                            ans+=20;
                        }else if(m%2==1){
                            ans+=20;
                        }else{
                            ans+=19;
                        }
                    }
                }
            }else{
                if(y%3==0) ans+=200;
                else ans+=195;
            }
        }

        cout<< 196471-ans<< endl;

    }


    return 0;
}