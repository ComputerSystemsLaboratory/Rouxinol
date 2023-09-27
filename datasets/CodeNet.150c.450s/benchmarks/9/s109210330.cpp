#include <iostream>
#include <string>
using namespace std;

int main(void){
    string row,sub;
    int m,h;
    while(1){
        cin>>row;
        if(row=="-")break;
        cin>>m;
        for(int i=1;i<=m;i++){
            cin>>h;
            sub=row.substr(h,row.size()-h);
            row=row.erase(h,row.size()-h);
            row=sub+row;
        }
        cout<<row<<endl;
    }
    return 0;
}