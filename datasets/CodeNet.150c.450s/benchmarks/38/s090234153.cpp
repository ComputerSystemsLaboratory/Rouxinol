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


    cin >> n;
    for(i=0;i<n;i++){
        d=0;
        cin >> a >> b >> c;
        if(a>b&&a>c){
            if((a*a-(b*b+c*c)==0)){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;

        }
        else if(b>c){
            if((b*b-(a*a+c*c)==0)){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
        else{
            if((c*c-(b*b+a*a)==0)){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }

}