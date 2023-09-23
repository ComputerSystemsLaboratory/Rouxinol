#include <iostream>
using namespace std;
int main(){
	int n,x;
	while(1){
		int y=0;
              cin >> n >> x;
                if(n==0 && x==0){
                   break;
                   }
	 for(int i=1;i<=n-2;i++){
		 for(int j=i+1;j<=n-1;j++){
			 for(int k=j+1;k<=n;k++){
				 if(i+j+k==x && i!=j && j!=k && i!=k){
                     y++;
				    }
		     	}
		    }
	    }
	    cout << y << endl;
	}
return 0;
}
