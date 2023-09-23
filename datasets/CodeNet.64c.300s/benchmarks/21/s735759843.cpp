#include<iostream>

using namespace std;
   
void Simultaneous()
{
    double a, b, c, d, e, f;
    double x, y;
      
    while(cin>>a>>b>>c>>d>>e>>f)  
    {
        x = ( c * e - b * f ) / ( a * e - b * d );
        y = ( a * f - c * d ) / ( a * e - b * d );
        
        cout.setf(ios::fixed); //"setf" is used for “half-adjusting”
        cout.precision(3); //precision is used for rould off three places of decimals
        
        //-0主要用来表&#36798;浮点数
        //-0有可能被用来表示一个可以四舍五入&#20026;零的&#36127;数，或者是一个从&#36127;方向上&#36235;近于零的数。
        // 下面的式子可&#35753;&#36127;0&#21464;成无符号的0
        if(x == 0)
        {
            x = 0;
        }
        
        if(y == 0)
        {
            y = 0;
        }
        
        cout<<x<<" "<<y<<endl;
    }
            
    return;
}
     
int main()
{     
    Simultaneous();
    return 0;
}