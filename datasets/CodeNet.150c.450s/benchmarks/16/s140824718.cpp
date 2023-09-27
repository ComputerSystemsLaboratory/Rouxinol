#include<iostream>
#include<string>
#include<vector>
struct Puddle{
	int idx;
	double area;
};
double area(int s_ptr,int e_ptr,std::vector<int> &height){
	int dh=0;
	double area=0;
	for(int i=s_ptr;i<e_ptr;i++){
		if(height[i]>height[i+1]){
			area+=0.5+dh;
			dh+=1;
		}else if(height[i]<height[i+1]){
			dh-=1;
			area+=0.5+dh;
		}else{
			area+=dh;
		}
	}
	return area;
}

std::vector<Puddle> range_puddle(int s_ptr,int e_ptr,int &max,std::vector<int> &height){
	std::vector<int> ptrs;
	std::vector<Puddle> sp,qp,p;
	for(int i=s_ptr;i<=e_ptr;i++){
		if(height[i]>=max) ptrs.push_back(i);
	}
	
	int n=ptrs.size();
	if(n>1){
		Puddle pud;
		for(int i=0;i<n-1;i++){
			pud.area=area(ptrs[i],ptrs[i+1],height);
			if(pud.area!=0){
				pud.idx=ptrs[i];
				p.push_back(pud);
			}
		}
	}
	int h_max=--max;
	if(ptrs[0]!=s_ptr) sp=range_puddle(s_ptr,ptrs[0]-1,max,height);
	if(ptrs[n-1]!=e_ptr) qp=range_puddle(ptrs[n-1]+1,e_ptr,h_max,height);
	std::vector<Puddle> puddle;
	int sl=sp.size(),ql=qp.size(),l=p.size();
	for(int i=0;i<sl;i++){
		puddle.push_back(sp[i]);
	}
	for(int i=0;i<l;i++){
		puddle.push_back(p[i]);
	}
	for(int i=0;i<ql;i++){
		puddle.push_back(qp[i]);
	}
	return puddle;
}

int main(){
	std::string str;
	std::cin>>str;
	int len=str.size();
	std::vector<int> height;
	height.push_back(0);
	int hi=0,max=0;
	for(int i=0;i<len;i++){
		char ch=str[i];
		if(ch=='/'){
			hi++;
			if(max<hi) max=hi;
		}else if(str[i]=='\\'){
			hi--;
		}
		height.push_back(hi);
	}
	std::vector<Puddle> p;
	p=range_puddle(0,len,max,height);
	double A=0;
	int k=0,n=p.size();
	for(int i=0;i<n;i++){
		A+=p[i].area;
		k++;
	}
	std::cout<<(int)A<<'\n'<<k;
	for(int i=0;i<n;i++){
		std::cout<<' '<<(int)p[i].area;
	}
	std::cout<<'\n';
	return 0;
}
