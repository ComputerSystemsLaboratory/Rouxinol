#include <math.h> 
#include<iostream>

using namespace std;

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}
int main(){
    int n,num,y=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        if(IsPrime(num)==1)y++;
    }
    cout << y << endl;
}
