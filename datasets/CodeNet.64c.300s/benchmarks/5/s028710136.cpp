#include<cstdio>

int main(){
    int h[10];
    for(int i=0;i<10;i++)scanf("%d",&h[i]);


    for(int i=0;i<10;i++)
        for(int j=i+1;j<10;j++)
        {
            if(h[i]<h[j])
            {
                int box=h[j];
                h[j]=h[i];
                h[i]=box;
            }
        }


    for(int i=0;i<3;i++)printf("%d\n",h[i]);
    return 0;
}