#include <iostream>
#include <vector>

using namespace std;

vector <vector <int> > sheet; 
vector <int> temp;
int r,c;
int main(){
    cin>>r>>c;
    for(int i=0;i<r;i++){
        int s=0;
        for(int j=0;j<c;j++){
            int a;
            cin>>a;
            temp.push_back(a);
            s+=a;
        }
        temp.push_back(s);
        s=0;
        sheet.push_back(temp);
        temp.clear();        
    }

    for(int i=0;i<c+1;i++){
        int s=0;
        for(int j=0;j<r;j++){
            s+=sheet[j][i];
        }
        temp.push_back(s);
        s=0;
    }
    sheet.push_back(temp);

    for(int i=0;i<r+1;i++){
        for(int j=0;j<c;j++){
            cout<<sheet[i][j]<<" ";
        }
        cout<<sheet[i][c]<<endl;
    }
}