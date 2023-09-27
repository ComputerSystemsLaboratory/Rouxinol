#include <iostream>
#include <string>
using namespace std;

int main(){

    int n,m,p,result,x[100],sum;
    double rate;


    while(cin>>n>>m>>p,n||m||p){

        sum=0;

        for(int i=0;i<n;i++){
            cin>>x[i];
            sum += x[i] * 100;
        }

       int result = sum *(100-p) / 100;
       if(x[m-1]==0) result = 0;
       else result = result/x[m-1];

        cout<<result<<endl;
    }

    return 0;
}
