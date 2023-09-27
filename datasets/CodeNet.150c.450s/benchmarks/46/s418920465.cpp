#include<iostream>
using namespace std;

int main()
{
    int n, x, i, min, max;
    int count = 0;

	do{
        cin >> n >> x;
        if((n == 0) && (x == 0)) break;

        count = 0;
            if((x < 6) || (x > (3 * n - 3))){
                cout << 0 << endl;
            }else{
                i = 1;
                if(x > 2 * n) i = x - 2 * n;
                for( ; 3 * i + 3 <= x; i++){
                    min = i + 1;
                    if(min < x - i - n) min = x - i - n;
                    max = (x - i - 1) / 2;
                    if(min <= max) count = count + max - min + 1;
            }
                cout << count << endl;
            }

    }while(1);

    return 0;
}