#include <iostream>
using namespace std;
int N, A, B, C, Y[110], i, n, X;

int ran(int x1, int i, int n){
    int x2;
    if(Y[i] == x1 && i==N)  return n;//0回を出すためのもの
    if(x1 == Y[i]){
        if(i==N)    return n;//最後止めるための条件
        else        i++;//整数と乱数の値が同じとき次の整数の検証に移る 
    }
    x2 = (A*x1+B)%C;//乱数を計算  
    n++;//リール数
    if(n > 10000)  return -1;//それ以外は－１

    return ran(x2, i, n);
}

int main(void){
    while(cin >> N >> A >> B >> C >> X){
        if(N == 0 && A == 0 && B == 0 && C == 0 && X == 0)  break;
        for(int i= 1; i<= N; i++)
            cin >> Y[i];
            cout << ran(X, 1, 0) << endl;
    }
    return 0;
}
