#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	int H,p,c,f,l,b; //p:point, c:check, f:flag, l:length
	int s[50];

	while(cin >> H){
		if(H==0){return 0;}

		p=0; b=-1;
		for(int i=0; i<50; i++){ s[i]=0;}
		for(int i=H-1; i>=0; i--){
			for(int j=0 ; j<5; j++){
				cin >> s[i*5+j];
			}
		}

		while(true){
			if(b==p){break;}
			b=p;
			for(int i=H-1; i>=0; i--){
				c=s[i*5+0]; l=1; f=0;
				for(int j=1 ; j<5; j++){
					if(c==s[i*5+j]){l++;}
					else if(l>=3){break;}
					else{ f=j; l=1; c=s[i*5+j];}
				}

				if(l>=3){
					for(int j=f ; j<l+f; j++){
						p+=s[i*5+j];
						s[i*5+j]=0;
					}
				}
			}

			for(int k=0; k<H-1; k++){		
				for(int i=H-1; i>0; i--){
					for(int j=0 ; j<5; j++){
						if(s[(i-1)*5+j]==0){
							s[(i-1)*5+j]=s[i*5+j];
							s[i*5+j]=0;
						}
					}
				}	
			}
		}
		cout << p << endl;
	}
}