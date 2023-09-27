#include <stdio.h>
int main(){
    char a[120],b[120];
    int n,m,r,p=0,x=0,win;
    for(int i=0;i<120;i++)a[i]=b[i]='\0';
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",a);
        scanf("%s",b);
        m=r=0;
        while(a[m]!='\0')m++;
        while(b[r]!='\0')r++;
        win=0;
        for(int j=0;j<r&&j<m&&win==0;j++){
            if(a[j]>b[j])win=1;
            if(a[j]<b[j])win=2;
        }
        if(win==0){
            if(r>m)win=2;
            else if(r<m)win=1;
            else {
                p+=1;
                x+=1;
            }
        }
        if(win==1)p+=3;
        if(win==2)x+=3;
    }
    printf("%d %d\n",p,x);
}