#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,x;
    int count=0;
    while(1){
        cin >> n >> x;
        if(n==0 && x==0){
            break;
        }
        int i,j,k;
        for(i=1;i<(n-1);i++){
            for(j=i+1;j<n;j++){
                for(k=j+1;k<=n;k++){
                    if(i+j+k==x){
                        count++;
                        break;
                    }
                }
            }
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}

