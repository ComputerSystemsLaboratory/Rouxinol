#include <bits/stdc++.h>
using namespace std;

int main() {
    // insert code here...
    int a,b,c;
    string sentence, replacement,command,copy;
    cin>>sentence;
    cin>>a;
    for (int i=0; i<a; i++) {
        cin>>command;
        if(command=="print"){
            cin>>b>>c;
            for(int l=0;l<c-b+1;l++){
                cout<<sentence[b+l];
            }
            cout<<endl;
            
        }else if(command=="reverse"){
            cin>>b>>c;
            for (int l=0; l<c-b+1; l++) {
                copy[l]=sentence[b+l];
                
            }
            for (int l=0; l<c-b+1; l++) {
                sentence[b+l]=copy[c-b-l];
                
            }
            
            
        }else if (command=="replace"){
            cin>>b>>c>>replacement;
            for (int l=0; l<c-b+1; l++) {
                sentence[b+l]=replacement[l];
                
            }
            
        }
    }
    
    return 0;
}
