#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int ans=0;
        string w;
        cin>>w;
        transform(w.begin(), w.end(), w.begin(), ::toupper);
        for(;;){
                string chk;
                cin>>chk;
                if(chk=="END_OF_TEXT")break;
                transform(chk.begin(), chk.end(), chk.begin(), ::toupper);
                if(chk==w)ans+=1;
        }
        cout<<ans<<endl;
        return 0;
}