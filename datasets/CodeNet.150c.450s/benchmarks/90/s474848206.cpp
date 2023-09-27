#include <iostream>

int main(){
	int a,c=0,t=0;
	int b[101],f[101],z[101],x[101];
	z[0]=0;
	
	while(std::cin>>a){
         c++;
	    b[c]=a;
	}
	for(int g=1;g<=100;g++){
		f[g]=0;
		z[g]=0;
	}

	for(int d=1;d<=c;d++){
			f[b[d]]++;
			}
	
	for(int g=1;g<=100;g++){
		
			if(f[g]>z[0]){
			
			z[0]=f[g];
			x[0]=g;
				t=0;
			}else if(f[g]==z[0]){
				t++;
			
				x[t]=g;
		}
	}
	
	for(int p=0;p<=t;p++){
		std::cout<<x[p]<<std::endl;
	}
	return 0;
		}
	
	