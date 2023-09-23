#include<iostream>
using namespace std;

int main(){
        cin.tie(0);
        ios::sync_with_stdio(false);

        int a,b,c,d;
        int a_sum, b_sum;

        cin >> a >> b >> c >> d;
        a_sum = a + b + c + d;
        cin >> a >> b >> c >> d;
        b_sum = a + b + c + d;

        if(a_sum == b_sum)      cout << a_sum << "\n";
        else                    cout << ((a_sum > b_sum) ? a_sum : b_sum)  << "\n";

        return 0;
}