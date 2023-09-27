#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include<set>
using namespace std;
typedef long long ll;
int a[10];
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        for(int i=0;i<10;i++){
            scanf("%d",&a[i]);
        }
        int w=0;
        int now=0;
        for(int i=0;i<10;i++){
            if(a[i]>now){
                now=a[i];
                a[i]=0;
                w++;
            }
        }
        now=0;
        for(int i=0;i<10;i++){
            if(a[i]>now){
                now=a[i];
                a[i]=0;
                w++;
            }
        }
        printf("%s\n",w==10?"YES":"NO");
    }
    return 0; 
}
