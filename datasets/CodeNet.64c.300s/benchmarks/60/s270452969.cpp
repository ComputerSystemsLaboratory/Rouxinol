#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
using namespace std;
int aa[1000][1000]={};
int main()
{
    int  i=0,j=0,n=0,a=0,b=0,c=0,d=0;
    while(1){
        cin >>a>>b;
        if(a==0&&b==0)break;
        cin >> n;
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                aa[i+1][j+1]=1;
            }
        }
        for(i=0;i<n;i++){
            cin >> c >> d;
            aa[c][d]=0;
        }
        
        for(i=1;i<a+1;i++){
            for(j=1;j<b+1;j++){
                if(aa[i][j]>0 ){
                    aa[i][j]=aa[i-1][j]+aa[i][j-1];
                    if(i==1&&j==1)aa[i][j]=1;
                }
            }
        }

        cout << aa[a][b] << endl;
    }

}