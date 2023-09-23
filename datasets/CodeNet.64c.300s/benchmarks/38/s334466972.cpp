#include <cstdio>
int a;
int main(void){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int b=-1,c=-1;
        bool flag=0;
        for(int j=1;j<=10;j++){
            scanf("%d",&a);
            if(b<a&&c<a&&!flag){
                if(b<c){
                    c=a;
                }
                else{
                    b=a;
                }
            }
            else if(b<a&&c>a&&!flag){
                b=a;
            }
            else if(b>a&&c<a&&!flag){
                c=a;
            }
            else{
                    flag=1;
                continue;
            }
        }
        if(flag) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}