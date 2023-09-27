#include<bits/stdc++.h>
using namespace std;

int main(){
    string w,t;
    int counter = 0;
    
    cin >> w;
    
    while(cin >> t){
        if(t == "END_OF_TEXT") break;
        
        if( (int)w.size() == (int)t.size() ){
            for(int i = 0;i<(int)w.size();++i){
                if( isupper(w[i]) ) w[i] = tolower(w[i]);
                if( isupper(t[i]) ) t[i] = tolower(t[i]);
                
                if(w[i] != t[i]) break;
                
                if(i == (int)w.size() - 1){
                    ++counter;
                }
            }
        }
    }
        cout << counter << endl;
        
        return 0;
    
}
