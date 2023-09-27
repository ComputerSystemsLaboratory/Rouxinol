#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        for(;;){
                int a,b;
                char op;
                scanf("%d %c %d",&a,&op,&b);
                if(op=='?'){
                        break;
                }else{
                        if(op=='+'){
                                printf("%d\n",a+b);
                        }else if(op=='-'){
                                printf("%d\n",a-b);
                        }else if(op=='*'){
                                printf("%d\n",a*b);
                        }else{
                                printf("%d\n",a/b);
                        }
                }
        }
        return 0;
}