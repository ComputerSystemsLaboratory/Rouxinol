#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,cnt=0;
    while(cin >> n){
        
        if(n > 36){
        }
        else if(n == 36){
            cnt = 1;
        }
        else{
            for(int i=0;i<10;++i){
                for(int j=0;j<10;++j){
                    for(int k=0;k<10;++k){
                        for(int l=0;l<10;++l){
                            if(i+j+k+l == n){
                                ++cnt;
                                break;
                            }
                        }
                    }
                }
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
}