#include <iostream>

using namespace std;

struct Dice
{
    int lable1;
    int lable2;
    int lable3;
    int lable4;
    int lable5;
    int lable6;
};

struct Dice num;

void mN(Dice &num)
{
    int tmp = num.lable1;
    num.lable1 = num.lable2;
    num.lable2 = num.lable6;
    num.lable6 = num.lable5;
    num.lable5 = tmp;
    
    return ;
}

void mS(Dice &num)
{
    int tmp = num.lable1;
    num.lable1 = num.lable5;
    num.lable5 = num.lable6;
    num.lable6 = num.lable2;
    num.lable2 = tmp;
    
    return ;
}
    
void mE(Dice &num)
{
    int tmp = num.lable1;
    num.lable1 = num.lable4;
    num.lable4 = num.lable6;
    num.lable6 = num.lable3;
    num.lable3 = tmp;
    
    return ;
}

void mW(Dice &num)
{
    int tmp = num.lable1;
    num.lable1 = num.lable3;
    num.lable3 = num.lable6;
    num.lable6 = num.lable4;
    num.lable4 = tmp;
    
    return ;
}

void mSpin(Dice &num)
{
    int tmp = num.lable2;
    num.lable2 = num.lable4;
    num.lable4 = num.lable5;
    num.lable5 = num.lable3;
    num.lable3 = tmp;
    
    return ;
}

int main()
{
    int cnt = 0;
    int a = 0;
    int b = 0;
    
    cin >> num.lable1 >> num.lable2 >> num.lable3 >> num.lable4 >> num.lable5 >> num.lable6;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> a >> b;
        Dice res = num;
        
        if ((a == res.lable3) || (a == res.lable4))
        {
            mW(res);
        }
        
        while (a != res.lable1)
        {
            mS(res);
        }
        
        while (b != res.lable2)
        {
            mSpin(res);
        }
        
        cout << res.lable3 << endl;
    }
    
    return 0;
}

