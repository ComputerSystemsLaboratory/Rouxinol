#include<iostream>
using namespace std;
int main(){
    while(1){
        int N,M,P,save,sum=0,x;
        cin >> N >> M >> P;
        if(N==0&&M==0&&P==0)    break;
        for(int i=0;i<N;i++){
               cin >> x;
               if((M-1)==i) save = x;
               sum += x;
        }
        if(save!=0)
            cout << sum*(100-P)/save << endl;
        else
            cout << 0 << endl;
    }
} 
