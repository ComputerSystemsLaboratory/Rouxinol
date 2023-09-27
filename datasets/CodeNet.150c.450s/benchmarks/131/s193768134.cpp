#include<iostream>
#include<list>
#include<map>
using namespace std;

int main(){
	while(true){
		int tmp,n=0,l;
		list<int>cur;
		map<int,int> as;
		map<int,int>::iterator mi;
		cin>>tmp>>l;
		if(l==0)break;
		do{
			int big=0,small=0;
			cur.clear();
			as.insert(pair<int,int>(tmp,n));
			n++;
			for(int i=0;i<l;i++){
				cur.push_back(tmp%10);
				tmp=tmp/10;
			}
			cur.sort();
			for(list<int>::iterator it=cur.begin();it!=cur.end();++it){
				small=small*10;
				small+=*it;
			}
			for(list<int>::reverse_iterator it=cur.rbegin();it!=cur.rend();++it){
				big=big*10;
				big+=*it;
			}
			tmp=big-small;
			mi=as.find(tmp);
		}while(mi==as.end());
		cout<<(*mi).second<<' '<<(*mi).first<<' '<<n-(*mi).second<<endl;
	}
	return 0;
}