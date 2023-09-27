#include<iostream>
using namespace std;
int main(){
    int W , H , x , y , r , i = 0;
    cin >> W >> H >> x >> y >> r;
    if(y - r >= 0){
        if(y + r <= H){
            if(x + r <= W){
                if(x - r >= 0){
                    cout << "Yes"<<endl;
                    i = 1;


                }
            }
        }
    }
    if(i==0){
        cout << "No"<<endl;

    }
    return 0;

}
