#include <stdio.h>

#include <math.h>

int hantei(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4);

int main(){
    
	double x1,x2,x3,x4,y1,y2,y3,y4;
    
	int result=0,i,n;
    
	scanf("%d",&n);
    
	for(i=0;i<n;i++){
        
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        
		result= hantei(x1,y1,x2,y2,x3,y3,x4,y4);
        
		if(result==1){
            
			puts("YES");
            
		}else puts("NO");
        
	}
    
    
    
    
    
    return 0;
    
}

int hantei(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4){
    
	double kata1,kata2;
    
	kata1=(y1-y2)/(x1-x2);
    
	kata2=(y3-y4)/(x3-x4);
    
	if(kata1==kata2){
        
		return 1;
        
	}else{
        
		return 0;
        
	}
    
    
    
}