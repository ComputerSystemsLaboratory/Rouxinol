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

    for(i=0;i<n-1;i++){
        a=i;
        for(j=i+1;j<n;j++){
            if(aa[j]<aa[a])a=j;
        }
        if(i!=a){
            swap(aa[i],aa[a]);
            c++;
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