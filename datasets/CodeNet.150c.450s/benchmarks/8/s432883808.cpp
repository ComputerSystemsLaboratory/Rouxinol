#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    double pai=3.141592653589;
    int n,taro=0,hanako=0;
    char t[100],h[100];
    string tarostr,hanakostr;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %s",&t,&h);
        tarostr=t;
        hanakostr=h;
        if(tarostr==hanakostr){
            taro++;
            hanako++;
        }else if(tarostr<hanakostr){
            hanako+=3;
        }else{
            taro+=3;
        }
    }
    printf("%d %d\n",taro,hanako);
    return 0;
}
