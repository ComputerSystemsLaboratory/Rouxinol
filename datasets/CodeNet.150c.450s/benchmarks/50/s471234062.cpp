#include <iostream>
using namespace std;

int main() {
	double a[1000],b;
	int c=0,i=0;
	while(cin>>a[i]){
		
		b=1000-a[i];
	    
	while(1){
		
		if(b<0){
			b=b+500.0;
			c--;
			break;
			
		}
		c++;
		b=b-500.0;
	}	
	while(1){
		
		if(b<0){
			b=b+100.0;
			c--;
			break;
		}
		c++;
		b=b-100.0;
	}	
	while(1){
		
		if(b<0){
			b=b+50;
			c--;
			break;
		}
		c++;
		b=b-50;
	}	
	while(1){
		
		if(b<0){
			b=b+10.0;
			c--;
			break;
		}
		c++;
		b=b-10;
    	}
    	while(1){
     		
    		if(b<0){
	    		b=b+5.0;
    			c--;
    			break;
    		}
		c++;
		b=b-5.0;
     	}
	    while(1){
		
		    if(b<0){
		    	b=b+1.0;
			    c--;
		    	break;
		    }
		    c++;
		    b=b-1.0;
	    }
	   if(a[i]==0){
	   	
	   }
       else{
       	cout<<c<<endl;
        }
        i++;
        c=0;
	}
	// your code goes here
	return 0;
}