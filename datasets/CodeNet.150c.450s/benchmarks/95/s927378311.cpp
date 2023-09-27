#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;

int main(){
    while(cin>>n&&n!=0){
        vector<string>s(n);
        for(int i=0;i<n;i++){
            cin >> s[i];
        }
        int a = 0;
        int b = 0;
        bool v = 0; 
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]=="lu"){
                a = 1;
                if(v==0&&a==1&&b==1){
                    ans++;
                    v = 1;
                }
            }else if(s[i]=="ru"){
                b = 1;
                if(v==0&&a==1&&b==1){
                    ans++;
                    v = 1;
                }
            }else if(s[i]=="ld"){
                a = 0;
                if(v==1&&a==0&&b==0){
                    ans++;
                    v = 0;
                }
            }else{
                b = 0;
                if(v==1&&a==0&&b==0){
                    ans++;
                    v = 0;
                }
            }

        }
        cout << ans << endl;

    }
    return 0;
}

