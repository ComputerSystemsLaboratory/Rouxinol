 #include<iostream>
using namespace std;
int main(){
    int m,n,s=0,b[200][200],t;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j<m;j++){
            cin >> b[i][j];
        }
    }
     for(int i=0;i<n;i++){
        s=0;
  
        for(int j=0;j<m;j++){
            cout <<b[i][j]<<" ";


            s+=b[i][j];
        }
        b[i][m]=s;
        cout <<s <<endl;
    }
     for(int i=0;i<=m;i++){ 
         s=0;
        for(int j=0;j<n;j++){
     
            s+=b[j][i];
        }
        cout<<s;
        if(i<m)
            cout<<" ";

    }
    cout <<endl;
	return 0;
}