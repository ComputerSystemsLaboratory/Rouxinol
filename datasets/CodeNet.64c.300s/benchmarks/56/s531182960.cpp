#include<iostream>
using namespace std;
int main(){
    long int N,Y,M,D,sum=0,mil;
    mil = 196471;
    cin >> N;
    while(N--){
        sum = 0;
        cin >> Y >> M >> D;
        for(int i=1;i<Y;i++){
            if(i%3==0)  sum+=200;
            else sum+=195;
        }
        for(int i=1;i<M;i++){
            if(Y%3==0){
                sum+=20;
            }
            else{
                if(i%2==0) sum+=19;
                else sum+=20;
            }
        }
        sum+=D;
        cout << mil-sum << "\n";
    }
}
