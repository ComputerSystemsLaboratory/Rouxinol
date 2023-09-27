#include <iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        for(int k=1;k<=n;k++)
        if(k%3==0||k%10==3||k/10==3||k/100==3||k/1000==3||k/10%10==3||k/100%10==3){
                cout<<" ";
                cout<<k;
        }
        cout<<endl;
        
}
//k/10%10==3||
//131??¨???