#include <iostream>
#include <string>
using namespace std;

int main(){
        int r,l,count,n,w;
        string s;
        while(1) {
                count=0;
                r=0;
                l=0;
                w=0;
                cin>>n;

                if(n==0) {
                        break;
                }

                for(int i=0; i<n; i++) {
                        cin>>s;
                        if(w==0) {
                                if(s=="lu") {
                                        l=1;
                                }else if(s=="ld") {
                                        l=0;
                                }else if(s=="ru") {
                                        r=1;
                                }else if(s=="rd") {
                                        r=0;
                                }
                                if(r==1&&l==1) {
                                        count++;
                                        w=1;
                                }
                        }else{
                                if(s=="lu") {
                                        l=1;
                                }else if(s=="ld") {
                                        l=0;
                                }else if(s=="ru") {
                                        r=1;
                                }else if(s=="rd") {
                                        r=0;
                                }
                                if(r==0&&l==0) {
                                        count++;
                                        w=0;
                                }
                        }

                }


                cout<<count<<endl;
        }
}

