#include <iostream>

using namespace std;
int main()
{
    while(true) {
        int loop;
        cin >> loop;
        int p1=0,p2=0;
        if(loop==0)break;
        while(loop--)
        {
            int a,b;
            cin >> a >> b ;
            if(a > b) {
                p1 = p1 + a + b;
            }else if(a==b) {
                p1 += a;
                p2 += b;
            }
            else {
                p2 = p2 + a + b;
            }
        }
        cout << p1 << " " << p2 << endl;
    }
    return 0;
}