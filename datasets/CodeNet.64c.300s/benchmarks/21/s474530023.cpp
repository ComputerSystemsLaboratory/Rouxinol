/*************************************************************************
	> File Name: 23.cpp
	> Author: ralph
	> Mail: 1694487365@qq.com
	> Created Time: 2018年12月21日 星期五 21时32分48秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f;
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        double ans1=(c*e-b*f)/(a*e-b*d),ans2=(a*f-c*d)/(a*e-b*d);
        printf("%.3f %.3f\n",ans1==0?0:ans1,ans2==0?0:ans2);
    }
}

