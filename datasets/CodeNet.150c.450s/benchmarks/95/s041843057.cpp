#include <iostream>

using namespace std;

int main(){
    while(true){
        int n;
        cin >> n;
        if(n==0)break;
        string str;
        bool st[2]={false,false};
        int c=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            cin >> str;
            if(str=="lu")st[0]=true;
            else if(str=="ru")st[1]=true;
            else if(str=="ld")st[0]=false;
            else if(str=="rd")st[1]=false;
            if(!flag && st[0] && st[1]){
                flag=true;
                c++;
            }
            else if(flag && !st[0] && !st[1]){
                flag=false;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}