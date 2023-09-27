#include <iostream>
using namespace std;

/* Main */
void cubedNum(void)
{
    int inputNum = -1;
    int result = 1;
    
    while(1)
    {
        cin >> inputNum;
        /* input check */
        if( (0 <= inputNum) && (inputNum <= 100) )
        {
            break;
        }
    }
    for(int i=3; i >= 1; --i)
    {
        result *= inputNum;
    }
    cout << result << endl;
    
    return;
}

/* Driver */
int main(void){
    cubedNum();
    return 0;
}