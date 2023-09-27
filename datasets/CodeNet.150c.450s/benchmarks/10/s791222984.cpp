#include <iostream>
#include <vector>

using namespace std;

class build
{
public:
    build(int s)
    {
        n = s;
        for(int i = 0;i < 10;i++)
        {
            f1[i] = 0;
            f2[i] = 0;
            f3[i] = 0;
        }
    }
    void    set(int fn,int rn,int mn);
    int     get(int fn,int rn);
    int n;
    int f1[10];
    int f2[10];
    int f3[10];
};

void build::set(int fn, int rn, int mn)
{
    switch(fn)
    {
    case 1:
        f1[rn] += mn;
        break;
    case 2:
        f2[rn] += mn;
        break;
    case 3:
        f3[rn] += mn;
        break;
    default:
        break;
    }
}

int build::get(int fn, int rn)
{
    switch(fn)
    {
    case 0:
        return f1[rn];
    case 1:
        return f2[rn];
    case 2:
        return f3[rn];
    default:
        break;
    }

    return 0;
}

int main()
{    
    int n;
    cin >> n;

    build a(1);
    build b(2);
    build c(3);
    build d(4);

    for(int i = 0;i < n;i++)
    {
        int bn;
        int fn;
        int rn;
        int mn;
        cin >> bn >> fn >> rn >> mn;
        switch(bn)
        {
        case 1:
            a.set(fn,rn - 1,mn);
            break;
        case 2:
            b.set(fn,rn - 1,mn);
            break;
        case 3:
            c.set(fn,rn - 1,mn);
            break;
        case 4:
            d.set(fn,rn - 1,mn);
        default:
            break;
        }
    }

    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 10;j++)
        {
            cout << " " << a.get(i,j);
        }
        cout << endl;
    }
    cout << "####################" << endl;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 10;j++)
        {
            cout << " " << b.get(i,j);
        }
        cout << endl;
    }
    cout << "####################" << endl;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 10;j++)
        {
            cout << " " << c.get(i,j);
        }
        cout << endl;
    }
    cout << "####################" << endl;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 10;j++)
        {
            cout << " " << d.get(i,j);
        }
        cout << endl;
    }

    return 0;
}