#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int  a=0,c=0,i=0,n=0,j=0;
    int aa[100]={};
    cin >> n;
    for(i=0;i<n;i++){
        cin >> aa[i];

    }
    bool flag = 1;
    while(flag){
        flag = 0;
        for(j = n-1; j > 0; j--){
            if(aa[j]<aa[j-1]){
                swap(aa[j],aa[j-1]);
                c++;
                flag=1;
            }
        }
    }

    for(i=0;i<n;i++){
        cout << aa[i];
        if(i<n-1){
            cout << ' ';
        }
    }
    cout << endl;
    cout << c << endl;
    //cout << b;
}