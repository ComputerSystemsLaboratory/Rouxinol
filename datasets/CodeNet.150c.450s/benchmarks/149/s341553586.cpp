#include<iostream>
int fa[10001],n,q;
int f(int a){
	if(fa[a]==a) return a;
	return fa[a]=f(fa[a]);
}
bool j(int a,int b){
	return f(a)==f(b);
}
void hb(int a,int b){
	int q=f(a),p=f(b);
	fa[q]=p;
}
int main(){
	std::cin>>n>>q;
	for(int i=0;i<n;i++) fa[i]=i;
	for(int i=0;i<q;i++){
		int a,b,c;
		std::cin>>a>>b>>c;
		if(a) std::cout<<j(b,c)<<"\n";
		else hb(b,c);
	}
}