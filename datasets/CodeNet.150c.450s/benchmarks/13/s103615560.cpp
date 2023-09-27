# include<cstdio>
# include<cstring>
int main() {
    char str1[100], str2[100], str3[100];
    scanf("%s %s", &str1, &str3);
    strcpy(str2, str1);
    strcat(str1, str2);
    if ( strstr(str1, str3) == NULL ) printf("No\n");
    else printf("Yes\n");
    return 0;
}
