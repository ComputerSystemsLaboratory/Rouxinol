#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        int sub = 0;
        for (int x=1; true;x++){
            sum = x*x;
            if(sum > i) break;
            else{
                for (int y=x; true; y++){
                    sum = x*x + y*y + x*y;
                    if(sum >i) break;
                    else{
                        for(int z=y; true; z++){
                            sum = x*x + y*y + x*y + z*z + x*z + y*z;
                            if(sum>i) break;
                            if(sum==i){
                                if(x==y && y==z) sub += 1;
                                else if(x==y || y==z || z==x) sub += 3;
                                else sub += 6;
                            }
                        }
                    }
                }
            }
        }
        cout << sub << endl;
    }
}