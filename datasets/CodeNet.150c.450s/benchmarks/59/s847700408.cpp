#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int  a=0,b=0,i=0,j=0,k=0;
    cin >> a;
    //int aa[1000]={};
    vector <int> aa(a,0);
    for(i=0;i<a;i++){
        cin >> aa[i];
    }

    for(i=0;i<a;i++){
        b=aa[i];
        j=i-1;
        while(j>=0 && aa[j]>b){//????????°???
            aa[j+1]=aa[j];//??§???????????????????????????
            j--;
            aa[j+1]=b;//?°???????????????\???????????\??????????????????
        }

        for(k=0;k<a;k++){

            cout << aa[k];
            if(k<a-1){
                cout << ' ';
            }
        }
        cout << endl;
    }

return 0;

}