#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int  /*a=0,b=0,c=0,*/n=0,x=0,i=0,j=0,k=0,sum=0;

        int aa[128][128];
        //int bb[]={};
        cin >> n >> x;
        //if(n==0 && x==0)break;
        for(i=0;i<n;i++){
            for(j=0;j<x;j++){
                cin >> k;
                aa[i][j]=k;
                sum+=k;
            }
            aa[i][j]=sum;
            sum=0;
        }


 for(j=0;j<x+1;j++){
        for(i=0;i<n;i++){
            sum+=aa[i][j];
        }
        aa[i][j]=sum;
        sum=0;

    }

        for(i=0;i<n+1;i++){
            for(j=0;j<x+1;j++){
                cout << aa[i][j];
                if(j<x)cout << ' ';
            }
            cout << endl;
        }


    //cout << endl;

return 0;

}

//1793081