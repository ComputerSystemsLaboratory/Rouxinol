#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;
class dice
{
public:
    dice()
    {

    }
    int n[6];
    int l[6][6];
    void set(int n0,int n1,int n2,int n3,int n4,int n5)
    {
        n[0] = n0;
        n[1] = n1;
        n[2] = n2;
        n[3] = n3;
        n[4] = n4;
        n[5] = n5;
        l[0][1] = 2;l[0][2] = 4;l[0][3] = 1;l[0][4] = 3;
        l[1][0] = 3;l[1][2] = 0;l[1][3] = 5;l[1][5] = 2;
        l[2][0] = 1;l[2][1] = 5;l[2][4] = 0;l[2][5] = 4;
        l[3][0] = 4;l[3][1] = 0;l[3][4] = 5;l[3][5] = 1;
        l[4][0] = 2;l[4][2] = 5;l[4][3] = 0;l[4][5] = 3;
        l[5][1] = 3;l[5][2] = 1;l[5][3] = 4;l[5][4] = 2;
    }
    int get(int i)
    {
        return n[i];
    }
    int rot(char c)
    {
        int t[6];
        for(int i = 0;i < 6;i++)
        {
            t[i] = n[i];
        }
        switch(c)
        {
        case 'N':
            n[0] = t[1];
            n[1] = t[5];
            n[5] = t[4];
            n[4] = t[0];
            break;
        case 'S':
            n[0] = t[4];
            n[1] = t[0];
            n[5] = t[1];
            n[4] = t[5];
            break;
        case 'E':
            n[0] = t[3];
            n[3] = t[5];
            n[5] = t[2];
            n[2] = t[0];
            break;
        case 'W':
            n[0] = t[2];
            n[3] = t[0];
            n[5] = t[3];
            n[2] = t[5];
            break;
        default:
            break;
        }
    }
    int getLink(int t,int f)
    {
        int nt,nf;
        for(int i = 0;i < 6;i++)
        {
            if(n[i] == t)
            {
                nt = i;
            }
        }
        for(int i = 0;i < 6;i++)
        {
            if(n[i] == f)
            {
                nf = i;
            }
        }
        return n[l[nt][nf]];
    }
};

int main()
{
    int n[6];
    for(int i= 0;i < 6;i++)
    {
        cin >> n[i];
    }
    dice d;
    d.set(n[0],n[1],n[2],n[3],n[4],n[5]);
    int s;
    cin >> s;
    for(int i = 0;i < s;i++)
    {
        int t,f;
        cin >> t >> f;
        cout << d.getLink(t,f) << endl;
    }
    return 0;
}