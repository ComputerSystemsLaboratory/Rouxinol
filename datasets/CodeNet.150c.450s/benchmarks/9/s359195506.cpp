#include <iostream>
#include<algorithm>
#include<cctype>
#include<string>

using namespace std;
int main()
{string str;
    int n;
    char k;
    int m;
    while(cin>>str){
        if(str=="-")break;
    cin>>n;
        for(int i=0; i<n; i++){
            cin>>m;
            for(int j=0; j<m; j++){
                k=str[0];
                str.erase(str.begin());
                str.push_back(k);
            }
        }
        cout<<str<<endl;
}
    
    return 0;
}