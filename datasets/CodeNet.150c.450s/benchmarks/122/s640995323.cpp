#include<vector>
#include<algorithm>
#include<functional>

#include<iostream>
#include<string>
using namespace std;


template<class T>
class IntervalHeap{
	std::vector<T> data;
	template<int b,class C>
	void heapup(C cmp,int k=-1){
		if(k==-1)k=(1+size())/2-1;
		int p;
		while(k){
			p=(k-1)/2;
			if(!cmp(data[2*k+b],data[2*p+b]))break;
			std::swap(data[2*k+b],data[2*p+b]);
			k=p;			
		}
	}
	template<int b,class C>
	void heapdown(C cmp){
		int x,k=0;
		while(1){
			x=2*k+1;
			if(size()<=2*x+b)break;
			if(2*(x+1)+b<size()&&cmp(data[2*(x+1)+b],data[2*x+b]))x++;
			if(!cmp(data[2*x+b],data[2*k+b]))break;
			std::swap(data[2*x+b],data[2*k+b]);
			if(2*x+1<size()&&data[2*x+1]<data[2*x])
				std::swap(data[2*x+1],data[2*x]);
			k=x;
		}
	}
public:
	int size()const{return data.size();}
	void push(T v){
		if(size()&1){
			data.push_back(v);
			if(data[size()-2]>data[size()-1]){
				std::swap(data[size()-2],data[size()-1]);
				heapup<0>(std::less<T>());
			}else heapup<1>(std::greater<T>());
		}else {
			data.push_back(v);
			if(2<size()){
				int k=(1+size())/2-1;
				int p=(k-1)/2;
				if(data[2*p]>data[2*k])heapup<0>(std::less<T>());
				else if(data[2*p+1]<data[2*k]){
					std::swap(data[2*p+1],data[2*k]);
					heapup<1>(std::greater<T>(),p);
				}
			}
		}
	}
	T min()const{return data.front();}
	T max()const{return 1<size()?data[1]:data[0];}
	void deleteMin(){
		data[0]=data[size()-1];
		data.pop_back();
		heapdown<0>(std::less<T>());
	}
	void deleteMax(){
		if(size()==1){
			data.pop_back();
			return;
		}
		data[1]=data[size()-1];
		data.pop_back();
		heapdown<1>(std::greater<T>());
	}
};


int main(){
	IntervalHeap<int> heap;
	string s;
	while(1){
		cin>>s;
		if(s=="end")break;
		if(s=="insert"){
			int n;
			cin>>n;
			heap.push(n);
		}else if(s=="extract"){
			cout<<heap.max()<<endl;
			heap.deleteMax();
		}
	}
	return 0;
}