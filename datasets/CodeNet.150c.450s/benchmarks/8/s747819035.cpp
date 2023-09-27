#include <stdio.h>
#include<string.h>
int main(void){
    int n,i,j,t=0,h=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        char a[101],b[101];
        scanf("%s%s",a,b);
        if(strcmp(a,b)==0){
        t++;
        h++;
        }else{
            int y,z=0;
            y=strlen(a)<strlen(b)?strlen(a):strlen(b);
        for(j=0;j<y;j++){
            if(a[j]==b[j])
            continue;
            else if(a[j]<b[j]){
             break;
            }else{
                z=1;
                break;
            }
        }
            if(j==y){
                if(strlen(a)<strlen(b))
                h+=3;
                else
                t+=3;
                
            }
            else{
            if(z)
            t+=3;
            else
            h+=3;
                
            }
            
        
        }
    }
    printf("%d %d\n",t,h);
    return 0;
}