//標準解答
//全角スペースにほんま注意　エラーでわかるけど
#include<cstdio>
#include<cstring>

int main(){
    char s[201], t[101], p[101];
    
    scanf("%s %s", s, p);
    strcpy(t, s); //tにsをコピー
    strcat(s, t); //sにtを連結

    if ( strstr(s, p) == NULL ) printf("No\n");
    else printf("Yes\n");
    
    return 0;
}
