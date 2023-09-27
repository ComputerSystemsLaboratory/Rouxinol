#include <stdio.h>


int main(void){

	char n;
	int ans=0;
	
	while(1){
	
		scanf("%c",&n);
	
		if(n=='0'){
			break;
		}else if(n=='1'){
		    ans+=1;
		}else if(n=='2'){
		    ans+=2;
		}else if(n=='3'){
		    ans+=3;
		}else if(n=='4'){
		    ans+=4;
		}else if(n=='5'){
		    ans+=5;
		}else if(n=='6'){
		    ans+=6;
		}else if(n=='7'){
		    ans+=7;
		}else if(n=='8'){
		    ans+=8;
		}else if(n=='9'){
		    ans+=9;
		}
		    
		
		while(1){
			scanf("%c",&n);
			
			if(n=='0'){
			}else if(n=='1'){
		    	ans+=1;
			}else if(n=='2'){
			    ans+=2;
			}else if(n=='3'){
			    ans+=3;
			}else if(n=='4'){
			    ans+=4;
			}else if(n=='5'){
			    ans+=5;
			}else if(n=='6'){
			    ans+=6;
			}else if(n=='7'){
			    ans+=7;
			}else if(n=='8'){
			    ans+=8;
			}else if(n=='9'){
			    ans+=9;
			}else{
				break;
			}
		}
		
		printf("%d\n",ans);
		ans=0;
	}
	
	return 0;
}