#include <iostream>
#define f(a) ((a)*(a))

using namespace std;
int main(){
    int d;
    long long int sum;
    while(cin >> d){
        sum=0;
        for(int i=1;i*d<600;i++){
            sum+=f(i*d)*d;
        }
    cout << sum << endl;
    }
    return 0;
}