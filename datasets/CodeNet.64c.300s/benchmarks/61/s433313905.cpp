#include<iostream>
using namespace std;
int main(){
    int r,c,i,k,a,m,b,n;
  
    cin >>r>>c;
    int hyou[r+1][c+1];
    for( i=0; i<r+1; i++){
        
		for(int k=0; k<c+1; k++){
			hyou[i][k]=0;
		}
	}  
    for(i=0;i<r;i++){
        b=0;
        for(k=0;k<=c;k++){
            
            if(k<c){
        
                cin >>a;
                hyou[i][k]=a;
                b+=a;
                cout<<a<<" ";
            }
            else if(k==c){
                hyou[i][k]=b;
                cout<<b<<endl;
            }
        }
            
    }
    for(k=0;k<=c;k++){
        
        n=0;
        for(i=0;i<r;i++){
            n+=hyou[i][k];
            
        }
        hyou[r][k]=n;
        if(k!=c){
            cout<<n<<" ";
        }
        else{
            cout<<n;
        }
        
    }
    
    cout<<endl;
    return 0;
}
