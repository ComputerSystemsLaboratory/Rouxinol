#include <iostream>
#include <string>
using namespace std;

struct Task{
    int t;
    string n;
};

int main(void){
    int n,q,i,t,c,head,tail;;
    Task task[100000];
    cin>>n>>q;
    for(i=0;i<n;i++){
        cin>>task[i].n>>task[i].t;
    }
    t=c=i=head=0;
    tail=n;
    while(c!=n){
        if(head==100000){
            head=0;
        }
        if(tail==100000){
            tail=0;
        }
        
        if(task[head].t>q){
            task[tail].n=task[head].n;
            task[tail].t=task[head].t-q;
            t+=q;
            head++;
            tail++;
        }
        else if(task[head].t>0){
            t+=task[head].t;
            c++;
            cout<<task[head].n<<" "<<t<<endl;
            head++;
        }
    }
    return 0;
}
