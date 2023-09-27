#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    vector <vector <int> > a;
    vector<int> b;

    for(int i=0;i<n;i++){
        vector <int > r;
        for(int j=0;j<m;j++){
            int A;
            cin>>A;
            r.push_back(A);
        }
        a.push_back(r);
    }

    for(int i=0;i<m;i++){
        int B;
        cin>>B;
        b.push_back(B);
    }

    for(int i=0;i<n;i++){
        int s=0;
        for(int j=0;j<m;j++){
            s+=a[i][j]*b[j];
        }
        cout<<s<<endl;
    }
}