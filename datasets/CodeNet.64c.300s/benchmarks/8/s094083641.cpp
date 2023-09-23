#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x=i;
    if(i%3 == 0){
        cout<<" "<<i;
    }
    else if(i%10 == 3){
            cout<<" "<<i;
   }
    else{
        for(x=i;x!=0;x/=10){
            if(x%10==3){
                cout<<" "<<i;
				x = 0;
             }
          }
       }
    }
    cout<<endl;

return 0;
}
