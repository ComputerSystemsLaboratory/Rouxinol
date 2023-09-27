#include <iostream>
#include <string>
using namespace std;

int main(){
        int a[50000];
        int i,j,min,sa,n;
        while(1) {
                cin>>n;

                if(n==0) {
                        break;
                }

                for(i=0; i<n; i++) {
                        cin>>a[i];
                }

                min=1000000;

                for(i=0; i<n; i++) {
                        for(j=0; j<n; j++) {
                                if(i!=j) {
                                        if(a[i]>a[j]) {
                                                sa=a[i]-a[j];
                                        }else{
                                                sa=a[j]-a[i];
                                        }

                                        if(min>sa) {
                                                min=sa;
                                        }
                                }
                        }
                }

                cout<<min<<endl;
        }

}

