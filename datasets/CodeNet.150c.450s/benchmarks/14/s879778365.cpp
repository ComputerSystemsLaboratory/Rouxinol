#include <iostream>
using namespace std;
 
int main(){
    int n, tmp;
    cin >> n;
    for(int i=1;i<n+1;i++){
        if(i%3==0){
            cout << " " << i;
        }else{
            tmp = i;
            while(tmp>0){
                if(tmp%10==3){
                    cout << " " << i;
                    break;
                }else{
                    tmp /= 10;
                }
            }
        }
    }
    cout << endl;
}
