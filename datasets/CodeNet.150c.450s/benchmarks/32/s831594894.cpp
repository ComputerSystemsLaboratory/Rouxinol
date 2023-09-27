#include <iostream>
using namespace std;

int main() {
	int m,min,max,ten[200],gap=10001,sa;
	
	cin>>m>>min>>max;
	
	while(1){
		if(m==0 && min==0 && max==0){
			break;
		}
	    for(int i=1;i<=m;i++){
    		cin>>ten[i];
    	}
    	for(int i=min;i<=max;i++){
    		if(gap>=ten[i+1]-ten[i]){
	    		gap=ten[i+1]-ten[i];
    			sa=i;
	    	}
	    }
    	cout<<sa<<endl;
    	gap=10001;
    	sa=0;
	    cin>>m>>min>>max;
	}

	
	return 0;
}