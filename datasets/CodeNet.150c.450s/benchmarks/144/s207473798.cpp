#include <iostream>
#include <vector>

using namespace std;

vector <vector <long long> > a,b,c;
int n,m,l;
int main(){
    cin>>n>>m>>l;
    for(int i=0;i<n;i++){
        vector<long long> t;
        for(int j=0;j<m;j++){
            int  A;
            cin>>A;
            t.push_back(A);
        }
        a.push_back(t);
    }
    for(int i=0;i<m;i++){
        vector<long long> t;
        for(int j=0;j<l;j++){
            int A;
            cin>>A;
            t.push_back(A);
        }
        b.push_back(t);
    }
    for(int i=0;i<n;i++){
        vector<long long>t;
        for(int j=0;j<l;j++){
            long long s=0;
            for(int k=0;k<m;k++){
                s+=a[i][k]*b[k][j];
            }
            t.push_back(s);
        }
        c.push_back(t);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            cout<<c[i][j];
            if(j!=l-1) cout<<" ";
            else cout<<endl;
        }
    }
}