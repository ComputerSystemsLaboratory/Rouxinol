#include <iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<queue>
#include<deque>
#include<regex>
#include<stack>
#include<stdio.h>
#include<vector>
#include<set>
#include<map>
#include<iomanip>
using namespace std;



int main() {
    int a,b;
    while(true){
        cin>>a>>b;
        if(a==0&&b==0)break;
        int orit=a*a+b*b;
        int a1=0,a2=0;
        int mint=10000000;
        int minh=0;
        for(int i=1;i<=150;i++){

            for(int j=1;j<150;j++){
                if(i!=j&&i<j){
                    int tai=i*i+j*j;
                    if(tai>orit&&tai<mint){
                        a1=i;
                        a2=j;
                        mint=tai;
                    }else if(tai==mint){
                        if(a1>i) {
                            a1 = i;
                            a2=j;
                            mint=tai;
                        }
                    }else if(tai==orit){
                        if(a+1<=i){
                            mint=tai;
                            a1=i;
                            a2=j;
                        }
                    }
                }
            }
        }





        cout<<a1<<" "<<a2<<endl;




    }

    return 0;
}

