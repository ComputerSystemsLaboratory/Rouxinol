#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        for(;;){
                int m,f,r;
                scanf("%d %d %d",&m,&f,&r);
                if(m+f+r==-3){
                        break;
                }else{
                        if(m==-1 || f==-1 || m+f<30){
                                printf("F\n");
                        }else if(m+f>=80){
                                printf("A\n");
                        }else if(m+f>=65){
                                printf("B\n");
                        }else if(m+f>=50 || r>=50){
                                printf("C\n");
                        }else{
                                printf("D\n");
                        }
                }
        }
        return 0;
}