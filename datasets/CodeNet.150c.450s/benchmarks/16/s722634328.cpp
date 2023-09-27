#include<iostream>
#include<stack>
using namespace std;

stack<int> S1;
stack< pair<int,int> > S2;

int main(){
	char str[20000]; cin>>str;
	int i=0,sum=0;

	while(str[i]!='\0'){

		if(str[i]=='\\')
			S1.push(++i);
		else if(str[i]=='/'){
			++i;

			if(!S1.empty()){
				sum += i-S1.top();

				if(!S2.empty()){
					int temp = 0;
					while( !S2.empty() && S1.top()<S2.top().first ){
						temp += S2.top().second;
						S2.pop();
					}
					S2.push( make_pair(S1.top(),i-S1.top()+temp) );
				}else
					S2.push( make_pair(S1.top(),i-S1.top()) );

				S1.pop();
			}

		}else if(str[i]=='_')
			++i;

	}

	while(!S1.empty()) S1.pop();

	cout<<sum<<endl;
	if(S2.size()!=0){
		cout<<S2.size()<<" ";

		int size = S2.size();
		for(int i=0;i<size;i++){
			S1.push(S2.top().second);
			S2.pop();
		}

		for(int i=0;i<size;i++){
			if(i) cout<<" ";
			cout<<S1.top();
			S1.pop();
		}
		cout<<endl;

	}else cout<<S2.size()<<endl;

	cin.sync(); cin.get();
}