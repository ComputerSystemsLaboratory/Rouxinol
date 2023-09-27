#include <iostream>
#include <stack>
#include <string>
#include <string.h>
using namespace std;
int main(){
    int a,b,sum=0,ans,area[10000];
    string s;
    char str[100000];
    stack<int> S1;
    stack<int> S2;
    stack<int> S3;
    cin>>s;
    int n=s.size();
    s.copy(str,n);
    for(int i=0;i<n;i++){
        if(str[i]== '/'){
            if(S1.size()!=0){
                a=S1.top();
                S1.pop();
                ans=i-a;
                sum=sum+ans;
                if(S2.size()==0){
                    S2.push(a);
                    S3.push(ans);
                }
                else{
                    if(S2.top()>a){
                        while(1){
                            if(S2.size()==0 || S2.top()<a){
                                break;
                            }
                            S2.pop();
                            b=S3.top();
                            ans=ans+b;
                            S3.pop();
                        }
                        S2.push(a);
                        S3.push(ans);
                        
                    }
                    else{
                    S2.push(a);
                    S3.push(ans);
                    }
                }
            }
        }
        else if(str[i]=='_'){
        }
        else{
            S1.push(i);
        }
    }

    int c=S2.size();
    cout<<sum<<endl<<c;
    for(int i=0;i<c;i++){
            area[i]=S3.top();
            S3.pop();
    }
    for(int i=c-1;i>=0;i--){
        cout<<" "<<area[i];
    }
    cout<<endl;
    return 0;
}
