#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        double x1,y1,x2,y2,x3,y3,x4,y4;
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        if(x1==x2||x3==x4){
            if(x1==x2&&x3==x4)puts("YES");
            else puts("NO");
        }
        else{
            double d=(y2-y1)/(x2-x1),d_=(y4-y3)/(x4-x3);
            if(d-d_<=0.0000001&&d-d_>=-0.0000001)puts("YES");
            else puts("NO");

        }
    }
    return 0;
}