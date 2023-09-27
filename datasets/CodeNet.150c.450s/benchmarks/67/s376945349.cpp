#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n && n){
        int cnt =0;
        for(int i=1; i<500;i++){
            int sum=0;
            int j=i;
            while(sum<=n){ 
                sum+=j;
                if(sum==n && j!=n){cnt++;}
                j++;
            }
        }
        cout << cnt<<endl;
    }

    return 0;
}