#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, m;
    string u[260], t;
    bool fnd, dor=false;
    cin>>n;
    for (int i=0; i<n; i++) cin>>u[i];
    cin>>m;
    for (int i=0; i<m; i++)
    {
        fnd=false;
        cin>>t;
        for (int j=0; j<n; j++) if (t==u[j]) fnd=true;
        if (fnd && dor) { cout<<"Closed by "; dor=false; }
        else if (fnd && !dor) { cout<<"Opened by "; dor=true; }
        else cout<<"Unknown ";
        cout<<t<<'\n';
    }
    return 0;
}

