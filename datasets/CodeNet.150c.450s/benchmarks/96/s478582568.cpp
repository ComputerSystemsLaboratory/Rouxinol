#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    char c;
    char alpha[10]={'.','.','a','d','g','j','m','p','t','w'};
    char alpha1[5]={' ','.',',','!','?'};
    cin>>N;
    getchar();
    while(N--){
        int cnt=0,before,now=0;
        while(c=getchar(),c!='\n'){
            before = now;
            now = c-'0';
            //printf("before=%d , now=%d\n",before,now);
            if(now!=0)cnt++;
            else if(before==1){
                printf("%c",alpha1[cnt%5]);
                cnt=0;
            }else if(before!=0){
                printf("%c",alpha[before]+(cnt-1)%(before==7||before==9 ? 4 : 3));
                cnt=0;
            }
        }
        cout<<endl;
    }
    return 0;
}