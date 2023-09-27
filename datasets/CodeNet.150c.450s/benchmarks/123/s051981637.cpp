#include <iostream>
using namespace std;
bool is_prime(int n)
{
    if(n<2)
        return false;
    for (int i=2;i*i<=n;i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n,N,sw=0;
    cin>>N;
    int array[N];
    for (int i = 0; i <N ; i++) {
        cin>>array[i];
    }
    for (int j = 0; j <N ; j++) {
         n = array[j];
        if (is_prime(n)) {
            sw++;
        }
    }
    cout<<sw<<endl;
}