#include<iostream>
using namespace std;
int main(){
    long long i,N,Y,M,D,ty,ny,sum,pass;
    cin >> N;
    while(N--){
        sum=0;
        pass=0;
        cin >> Y >> M >> D;
        ty = 333 - (Y/3);
        ny = 999 - ty-Y;
        sum = ny*195+ty*200;
        if(Y%3==0){
            sum+=200;
            for(i=1;i<M;i++){
                pass+=20;
            }
        }
        else{
                for(i=1;i<M;i++){
                    if(i%2==0)  pass+=19;
                    else    pass+=20;
                }
                sum+=195;
        }
        pass+=D;
        //cout << ty << "   " << ny << endl;
        cout << sum-pass+1 << endl;
    }
    return 0;
}
