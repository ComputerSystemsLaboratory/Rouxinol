#include<iostream>
#include<iomanip>       //マニピュレータの使用
using namespace std;

int main()
{
    double a, b ,c ,d ,e ,f;
    double x, y;

    while( cin >> a >> b >> c >> d >> e >> f )
    {
        y = ( c * d - a * f ) / ( d * b - a * e );   //y = (cd - af) / (db - ae)
        x = ( c - b * y ) / a;                       //x = (c -  by) / a

        cout << fixed;      //より正確に小数点以下の桁数を指定する.　setprecision(2)なら小数点3ケタを四捨五入して、小数点2桁きっちり表示
        cout << setprecision(3) << x << " " << y << endl;
    }

    return 0;
}
