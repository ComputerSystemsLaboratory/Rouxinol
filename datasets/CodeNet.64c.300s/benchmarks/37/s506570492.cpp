#include<iostream>
using namespace std;
int main(){
    int n,sum,count=0;
    while(1){
        cin >> n;
        if(!n)  break;
        for(int i=1;i<=n/2;i++){
            sum = 0;
            for(int j=i;sum<n;j++){
                sum+=j;
                if(sum==n)  count++;
            }
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}
