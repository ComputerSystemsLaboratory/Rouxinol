#include<iostream>
#include<algorithm>
using namespace std;
struct Tre{
    int w,l,r;
}num[30];
int n;
int tot=0;
int done[30];
void qx(int wz){
    cout<<" "<<wz;
    if(num[wz].l!=-1) qx(num[wz].l);
    if(num[wz].r!=-1) qx(num[wz].r);
}
void zx(int wz){
    if(num[wz].l!=-1) zx(num[wz].l);
    cout<<" "<<wz;
    if(num[wz].r!=-1) zx(num[wz].r);
}
void hx(int wz){
    if(num[wz].l!=-1) hx(num[wz].l);
    if(num[wz].r!=-1) hx(num[wz].r);
    cout<<" "<<wz;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        cin>>num[a].l>>num[a].r;
        if(num[a].l!=-1) done[num[a].l]=1;
        if(num[a].r!=-1) done[num[a].r]=1;
    }
    int p=-1;
    for(int i=0;i<n;i++) if(!done[i]) p=i;
    cout<<"Preorder\n";
    qx(p);
    cout<<"\nInorder\n";
    zx(p);
    cout<<"\nPostorder\n";
    hx(p);
    cout<<"\n";
    return 0;
}