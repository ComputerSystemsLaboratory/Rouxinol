#include <iostream>
using namespace std;
int main(){
        while(true){
                int n,number[1000000],k;
                long long int num=0,max=-1000000000;
                cin >> n >> k;
                if(n+k==0)      break;
                for(int i=0 ; i<n ; i++ )
                        cin >> number[i];
                for(int i=0 ; i<n-k ; i++ ){
                        num=0;
                        for(int j=0 ; j<k ; j++ ){
                                num+=number[i+j];
                        }
                        if(max<num)
                                max=num;
                }
                cout << max << endl;

        }
        return 0;
}