#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    char lis[10][10]={
        "",
        ".,!? ",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz",
    };
    int n;
    scanf("%d",&n);
    while(n--){
        char str[2024];
        scanf("%s",str);
        int v,cnt=-1;
        for(int i=0;str[i];i++){
            if(str[i]=='0'){
                if(cnt!=-1){
                    printf("%c",lis[v][cnt]);
                    cnt=-1;
                }
            }
            else{
                v=str[i]-'0';
                cnt++;
                cnt%=strlen(lis[v]);
            }
        }
        puts("");
    }
    return 0;
}