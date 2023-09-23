#include <iostream> 

int main(){
	int a,b,x=0;
	int gh[50];	
	while(std::cin>>a>>b){
		if(a==0&&b==0){
			for(int gf=1;gf<=x;gf++){
		std::cout<<gh[gf]<<std::endl;
	}return 0;
		}
		int d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0;
		int o=0;
		x++;
		for(int d=0;d<10;d++){
			if(a>1&&d<=10-a){
				for(d2=d+1;d2<10;d2++){
			if(a>2&&d2<=10-a+1){
				for(d3=d2+1;d3<10;d3++){
			if(a>3&&d3<=10-a+2){
				for(d4=d3+1;d4<10;d4++){
			if(a>4&&d4<=10-a+3){
				for(d5=d4+1;d5<10;d5++){
			if(a>5&&d5<=10-a+4){
			for(d6=d5+1;d6<10;d6++){
			if(a>6&&d6<=10-a+5){
			for(d7=d6+1;d7<10;d7++){
			if(a>7&&d7<=10-a+6){
				for(d8=d7+1;d8<10;d8++){
			if(a>8&&d8<=10-a+7){
				for(d9=d8+1;d9<10;d9++){
		if(a==9&&b==d+d2+d3+d4+d5+d6+d7+d8+d9){
			o++;
		}
			}
		}
		if(a==8&&b==d+d2+d3+d4+d5+d6+d7+d8+d9){
			o++;
		}
			}
		}
		if(a==7&&b==d+d2+d3+d4+d5+d6+d7+d8+d9){
			o++;
		}
			}
		}
		if(a==6&&b==d+d2+d3+d4+d5+d6+d7+d8+d9){
			o++;
		}
			}
		}
		if(a==5&&b==d+d2+d3+d4+d5+d6+d7+d8+d9){
			o++;
		}
			}
		}
		if(a==4&&b==d+d2+d3+d4+d5+d6+d7+d8+d9){
			o++;
		}
			}
		}if(a==3&&b==d+d2+d3+d4+d5+d6+d7+d8+d9){
			o++;
		}
			}
		}if(a==2&&b==d+d2+d3+d4+d5+d6+d7+d8+d9){
			o++;
		}
		}
		
			}if(a==1&&b==d){
			o++;
		}
		}
		gh[x]=o;
	}
	
	return 0;
}