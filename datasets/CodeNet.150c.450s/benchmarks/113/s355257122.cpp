#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        for(int i=1;;i++){
                int x;
                cin>>x;
                if(x){
                    printf("Case %d: %d\n",i,x);
                }else{
                        break;
                }
        }
        return 0;
}