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
                char op[10];
                //cin>>a>>op>>b;
                scanf("%d %c %d",&a,op,&b);
                if(*op=='?'){
                    break;
                }else if(*op=='+'){
                        cout<<a+b<<endl;
                }else if(*op=='-'){
                        cout<<a-b<<endl;
                }else if(*op=='*'){
                        cout<<a*b<<endl;
                }else if(*op=='/'){
                        cout<<a/b<<endl;
                }
        }
        return 0;
}