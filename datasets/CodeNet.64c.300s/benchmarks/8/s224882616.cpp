#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 3; i <= n; i++){
        if(i % 3 == 0){
            cout << " " << i;
        }else{
            int t = 1;
            while(1){
                    if((i / t) % 10 == 3){
                        cout << " " << i;
break;
                    }
                t *= 10;
                if(i / t == 0){
                    break;
            }
        }
    }
    }
cout << endl;
return 0;
}
    