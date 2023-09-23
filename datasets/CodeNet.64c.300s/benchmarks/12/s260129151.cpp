#include <iostream>

using namespace std;

int cubic(int num)
{
    int ret = 1;
    for(int i = 0; i < 3; i++)
    {
        ret *= num;
    }
    
    return ret;
}

int main(void){
    int num;
    cin >> num;
    
    int answer = cubic(num);
    
    cout << answer << endl;
    
    return 0;
}