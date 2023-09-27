#include<stdio.h>
int main(){
  int w,h,a[51][51],i,j,i2,j2,c,k;
  while(1){
    //syokika
    for(i=0;i<51;i++){
      for(j=0;j<51;j++){
	a[i][j]=0;
      }
    }
    c=2;
  
    scanf("%d%d",&w,&h);
    if(w==0&&h==0)break;
    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
	scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
	if(a[i][j]==1){
	  a[i][j]=c;
	  k=1;
	  while(k!=3){
	    k=1;
	    //go
	    for(i2=0;i2<h;i2++){
	      for(j2=0;j2<w;j2++){
		//someru
		if(a[i2][j2]==1){
		  if(j2!=0){
		    if(a[i2][j2-1]==c){
		      a[i2][j2]=c; //left
		      k=2;
		    }
		  }
		  if(i2!=0){
		    if(a[i2-1][j2]==c){
		      a[i2][j2]=c; //up
		      k=2;
		    }		    

		    if(j2!=0){
		      if(a[i2-1][j2-1]==c){
			a[i2][j2]=c; //left up
			k=2;
		      }
		    }
		    if(a[i2-1][j2+1]==c){
		      a[i2][j2]=c; //right up
		      k=2;
		    }
		    
		  }
		}
		//some end
	     
	      }
	    }

	    //back
	    for(i2=h-1;i2>=0;i2--){
	      for(j2=w-1;j2>=0;j2--){
		//someru
		if(a[i2][j2]==1){
		  if(a[i2][j2+1]==c){
		    a[i2][j2]=c; //right
		    k=2;
		  }    
		  if(a[i2+1][j2]==c){
		    a[i2][j2]=c; //down
		    k=2;
		  }		
		  if(a[i2+1][j2+1]==c){
		    a[i2][j2]=c; //right do
		    k=2;
		  }
		  if(j2!=0){
		    if(a[i2+1][j2-1]==c){
		      a[i2][j2]=c; //left do
		      k=2;
		    }
		  }
		}
		
		
		//some end
		
	      }
	    }
	    if(k==1)k=3;
	    //sima end
	  }
	  c++;
	}
      }
    }
    printf("%d\n",c-2);
  }
  return 0;
}