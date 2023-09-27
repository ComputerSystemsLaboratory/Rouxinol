#include <stdio.h>

int sgn(double val)
{
    if(val==0)return 0;
    if(val>0)return 1;
    if(val<0)return -1;
    return -0x7fffffff-1;
}

bool inSameSide(double lx1,double ly1,double lx2,double ly2,
                double tx1,double ty1,double tx2,double ty2)
{
    double nvec[2]={ly1-ly2,lx2-lx1};// 法線vector
    double tp1=tx1*nvec[0]+ty1*nvec[1],
    tp2=tx2*nvec[0]+ty2*nvec[1],
    lp=lx1*nvec[0]+ly1*nvec[1];
    return sgn(tp1-lp)==sgn(tp2-lp);
}

int main(void)
{
    double x1,x2,x3,xp,y1,y2,y3,yp;
    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)
          ==8)
    {
        bool result=inSameSide(x1,y1,x2,y2,x3,y3,xp,yp)
        &&inSameSide(x2,y2,x3,y3,x1,y1,xp,yp)
        &&inSameSide(x3,y3,x1,y1,x2,y2,xp,yp);
        printf("%s\n",result?"YES":"NO");
    }
    return 0;
}