#include  <iostream>
#include  <cstdio>

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

int main(){
for(;;){
        int n;
        scanf("%d",&n);
        
        if(n==0){return 0;}
        
        int x[n],y[n];
        x[0]=0;
        y[0]=0; 
        
        int c,d;

        for(int i=1;i<n;i++){
                scanf("%d %d",&c,&d);
                x[i]=x[c]+dx[d];
                y[i]=y[c]+dy[d];
        }
        
        int xmin=n;
        int ymin=n;
        int xmax=-n;
        int ymax=-n;
        
        for(int i=0;i<n;i++){
                if(xmin>x[i]){xmin=x[i];}
                if(xmax<x[i]){xmax=x[i];}
                if(ymin>y[i]){ymin=y[i];}
                if(ymax<y[i]){ymax=y[i];}       
        }
        
        printf("%d %d\n",xmax-xmin+1,ymax-ymin+1);
}
}