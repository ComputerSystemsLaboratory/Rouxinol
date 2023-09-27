#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int mod=1000000007;
    int n,s,ans;
    for (;;) {
        scanf("%d %d",&n,&s);
        ans=0;
        if (n==0 && s==0) break;
        for (int a=0;a<10-n+1;a++) {
            if (n==1 && a==s) ans++;
            if (n>1){
                for (int b=a+1;b<10-n+2;b++) {
                    if (n==2 && a+b==s) ans++;
                    if (n>2) {
                        for (int c=b+1;c<10-n+3;c++) {
                            if (n==3 && a+b+c==s) ans++;
                            if (n>3) {
                                for (int d=c+1;d<10-n+4;d++) {
                                    if (n==4 && a+b+c+d==s) ans++;
                                    if (n>4) {
                                        for (int e=d+1;e<10-n+5;e++) {
                                            if (n==5 && a+b+c+d+e==s) ans++;
                                            if (n>5) {
                                                for (int f=e+1;f<10-n+6;f++) {
                                                    if (n==6 && a+b+c+d+e+f==s) ans++;
                                                    if (n>6) {
                                                        for (int g=f+1;g<10-n+7;g++) {
                                                            if (n==7 && a+b+c+d+e+f+g==s) ans++;
                                                            if (n>7) {
                                                                for (int h=g+1;h<10-n+8;h++) {
                                                                    if (n==8 && a+b+c+d+e+f+g+h==s) ans++;
                                                                    if (n>8) {
                                                                        for (int i=h+1;i<10-n+9;i++) {
                                                                            if (n==9 && a+b+c+d+e+f+g+h+i==s) ans++;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n",ans);    
    }
    return 0;
}