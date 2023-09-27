#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
  int a,b;
  long int ant,kazu[100000],maxt;
  while(1){
    maxt=0;
    scanf("%d%d",&a,&b);
    if(a==0&&b==0) return 0;
    for(int i=0;i<a;i++)scanf("%ld",&kazu[i]);
    for(int i=0;i<b;i++) maxt=maxt+kazu[i];
    ant=maxt;
    for(int i=0;i<a-b;i++) {maxt=max(maxt,ant-kazu[i]+kazu[i+b]); 
      ant=ant-kazu[i]+kazu[i+b];
    }
    printf("%ld\n",max(maxt,ant));
  }
  
}