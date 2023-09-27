#include <iostream>
#include <string>
int main(){
    using namespace std;
    char c,ans;
    int i;
    string s;
    getline(cin, s);
    int size = s.size();
    for(i=0;i<size;i++){
        c = s[i];
        if(isupper(c)!=0&&islower(c)==0){
            ans = tolower(c);
        }else if(islower(c)!=0&&isupper(c)==0){
            ans = toupper(c);
        }else{
            ans = c;
        }
        cout << ans;
    }
    cout << endl;
    return 0;
}