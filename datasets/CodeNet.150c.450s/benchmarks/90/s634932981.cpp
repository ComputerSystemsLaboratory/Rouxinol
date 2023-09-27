#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>Times(101,0);
    int x;
    while(cin >> x){
      Times[x]+=1;
    }
    
    int ma =-1;
    for(int x=1; x<=100; x++){
        if(ma<Times[x]) ma=Times[x];
    }
     
    for(int x=1; x<=100; x++){
        if(Times[x] == ma) cout << x << endl;
    } 
    return 0;
}
