
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#include <bitset>
#include <list>
#include <sstream>
#include <set>
#include <functional>
 
using namespace std;
 
#define INT_MAX 1 << 30
#define MAX 100
 
typedef long long ll;
 
int n;
char a[10],b[10];
int ans;
 
 
int change(char c)
{
    int anss;
    if(c == 'm')anss = 1000;
    else if(c == 'c')anss = 100;
    else if(c == 'x')anss = 10;
    else if(c == 'i')anss = 1;
    return anss;
}
 
int c_d(char d[100])
{
    int summ = 0;
    for (int i = 0; i < strlen(d); i += 1)
    {
        if ((d[i] >= 50) && (d[i] <= 57))
        {
            int j = i+1;
            int a = int(d[i]-48);   //cout << a << endl;
            int b = change(d[j]);   //cout << b << endl;
            summ += a*b;            //cout << summ << endl;
            i++;
        }
        else
        {
            summ += change(d[i]);
        }
    }
    return summ;
}
 
 
int main()
{
    scanf("%d",&n);
    while (n--)
    {
        scanf("%s",a);
        scanf("%s",b);
        ans = c_d(a)+c_d(b);            //将a,b转换为十进制数
                                        //以下为将十进制数转换输出
        int j = 0,a1,k = 0;       
        char d[100] = {0};
        a1 = ans;
        while (a1)                      //求整数的位数
        {
            a1 /= 10;
            j++;
        }
        int t1,t2,t,j1=j;
        for (int l = 0; l < j; l += 1)  //求整数中每一位并进行转换
        {
            
            t1 = ans%int(pow(10.0,j1));
            t2 = pow(10.0,j1-1);
            t = t1/t2;              
            if(t == 1)
            {
                if(j1 == 4)      d[k] = 'm';
                else if(j1 == 3) d[k] = 'c';
                else if(j1 == 2) d[k] = 'x';
                else if(j1 == 1) d[k] = 'i';
            }
            else if(t!=0)               //为０时相应mcxi字符不显示
            {
                int k1 = k+1;
                if(j1 == 4)     {d[k] = (t+48);d[k1] = 'm';}
                else if(j1 == 3){d[k] = (t+48);d[k1] = 'c';}
                else if(j1 == 2){d[k] = (t+48);d[k1] = 'x';}
                else if(j1 == 1){d[k] = (t+48);d[k1] = 'i';}
                k++;
            }
            if(t!=0)k++;                //为０时不移位，否则逢d[k]遇０停止输出
            j1--;
        }
        cout << d << endl;          
    }
    return 0;
}
