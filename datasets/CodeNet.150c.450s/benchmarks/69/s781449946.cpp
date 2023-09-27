#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;
const int maxn = 11;

int num[maxn];

int main()
{
    int ite=0;
    scanf("%d", &ite);
    while(ite--)
    {
        bool flag = true;
        for(int i=0; i<10; ++i)
        {
            scanf("%d", &num[i]);
        }

        stack<int> a, b;

        a.push(num[0]);
        int i = 1;
        while(i<10 && num[i]>a.top()){
            a.push(num[i++]);
        }
        if(i+1<10) b.push(num[i++]);
        for(; i<10; ++i){
            int dif1 = num[i] - a.top(), dif2 = num[i]-b.top();
            if(dif1<0 && dif2<0) {
                flag = false;
                break;
            }
            else if(dif1>0 && dif2>0){
                if(a.top()<b.top()) b.push(num[i]);
                else a.push(num[i]);
            }
            else{
                if(dif1>0) a.push(num[i]);
                else b.push(num[i]);
            }
        }
        if(flag)  printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

