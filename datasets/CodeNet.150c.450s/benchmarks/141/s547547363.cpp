#include<iostream>
using namespace std;

int main(){
	double x[3],y[3],xp,yp;
	while(cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>xp>>yp){
		bool ans=true;
		//xが一番小さい点と大きい点を見つける
		int Xmin=0,Xmax=0;
		double tan[2],tanP;
		
		int k=0;
		int Yflg=0; //xの値が同じだった場合、自分よりyが大きい場合１、小さい場合−１とする
		
		for(int i=1;i<3;i++){
			if(x[Xmin]>x[i]) Xmin=i;
			if(x[Xmax]<x[i]) Xmax=i;
		}
		//x座標の一番小さい点とそれ以外の点との傾き(tan)を求める
		for(int i=0;i<3;i++){
			if(i!=Xmin){
				if(x[i]==x[Xmin]){ //もしxの一番小さい点が2つあった場合
					if(y[i]>y[Xmin]) Yflg=1;
					if(y[i]<y[Xmin]) Yflg=-1;
				}else{ //それ以外
					tan[k++]=(y[i]-y[Xmin])/(x[i]-x[Xmin]);
				}
			}
		}
		if(xp<=x[Xmin]){ //点pのxが一番小さなx以下の場合、三角形の中にpは入っていない
			ans=false;
		}else{ //それ以外
			tanP=(yp-y[Xmin])/(xp-x[Xmin]);
		}
		//点Pとの角度が他の2点の間にない場合、pは三角形の中には入っていない
		if((Yflg==0) && !((tan[0]<tanP && tan[1]>tanP)||(tan[1]<tanP && tan[0]>tanP))){
			ans=false;
		}else if((Yflg==1) && !(tan[0]<tanP)){
			ans=false;
		}else if((Yflg==-1) && !(tan[0]>tanP)){
			ans=false;
		}

		//x座標の一番大きい点とそれ以外の点との傾き(tan)を求める
		k=0; Yflg=0;
		for(int i=0;i<3;i++){
			if(i!=Xmax){
				if(x[i]==x[Xmax]){ //もしxの一番小さい点が2つあった場合
					if(y[i]>y[Xmax]) Yflg=1;
					if(y[i]<y[Xmax]) Yflg=-1;
				}else{ //それ以外
					tan[k++]=(y[i]-y[Xmax])/(x[Xmax]-x[i]);
				}
			}
		}
		if(xp>=x[Xmax]){ //点pのxが一番大きなx以上の場合、三角形の中にpは入っていない
			ans=false;
		}else{ //それ以外
			tanP=(yp-y[Xmax])/(x[Xmax]-xp);
		}
		//点Pとの角度が他の2点の間にない場合、pは三角形の中には入っていない
		if((Yflg==0) && !((tan[0]<tanP && tan[1]>tanP)||(tan[1]<tanP && tan[0]>tanP))){
			ans=false;
		}else if((Yflg==1) && !(tan[0]<tanP)){
			ans=false;
		}else if((Yflg==-1) && !(tan[0]>tanP)){
			ans=false;
		}

		if(ans) cout<<"YES"<<endl;
		else    cout<<"NO"<<endl;
	}
	return 0;
}