#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
int main(void){

    char str[10][100] = {
    {""},
    {".,!? "},
    {"abc"},
    {"def"},
    {"ghi"},
    {"jkl"},
    {"mno"},
    {"pqrs"},
    {"tuv"},
    {"wxyz"}
    };

    int n; scanf("%d",&n);
    for(int i = 0;i < n;i++){
        char in[10000];
        scanf("%s",in);
        int cnt = -1;
        for(int i = 0;i < strlen(in);i++){
            if(in[i] == '0'){
                if(cnt == -1) continue;
                if(in[i-1] == '1'){
                    cnt %= 5;
                }
                else if(in[i-1] == '9' || in[i-1] == '7'){
                    cnt %= 4;
                }
                else{
                    cnt %= 3;
                }
                printf("%c",str[in[i-1]-'0'][cnt]);
                cnt = -1;
            }
            else cnt++;
        }
        printf("\n");
    }

    return 0;
}