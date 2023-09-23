#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll d,sum=0;
    while(cin >> d){
        sum=0;
        for(int i=1;i<=(600/d)-1;i++){
            sum+=d*(i*d)*(i*d);
        }
        cout << sum << endl;
    }
    return 0;
}
