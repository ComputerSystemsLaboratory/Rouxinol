#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int n;
        int t=0;
        int h=0;
        cin>>n;
        for(int i=0;i<n;i++){
                char x[100],y[100];
                scanf("%s %s",x,y);
                if (strcmp(x,y)==0) {
                        t+=1;
                        h+=1;
                } else if (strcmp(x,y)<0) {
                        h+=3;
                } else {
                        t+=3;
                }
        }
        printf("%d %d\n",t,h);
        return 0;
}