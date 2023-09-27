#include <iostream>
using namespace std;

int tax(int rate, int val)
{
    return (100+rate)*val/100;
}

int max(int a, int b)
{
    return a>=b?a:b;
}

int main() {
    while(true)
    {
        int x,y,s;
        cin >> x >> y >> s;
        if(x==0)
            break;
        int maximum = 0;
        for(int i=1;i<s;i++)
            for(int j=i;j<s;j++)
                if(tax(x,i)+tax(x,j) == s)
                    maximum = max(maximum,tax(y,i)+tax(y,j));
        cout << maximum << endl;
    }

    return 0;
}