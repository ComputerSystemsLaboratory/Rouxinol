#include<iostream>
#include<string>
using namespace std;
string qst;
void replace(int s, int f, string rep){
    int c=0;
    for(int i=s;i<f+1;i++){
        qst[i]=rep[c];
        c++;
    }
}
void reverse(int s, int f){
    char tmp[1000];
    int c=0;
    for(int i=s;i<f+1;i++){
        tmp[i]=qst[f-c];
        c++;
    }
    for(int i=s;i<f+1;i++){
        qst[i]=tmp[i];
    }
}
void print(int s, int f){
    for(int i=s;i<f+1;i++){
        cout<<qst[i];
    }
    cout<<endl;
}
int main(){
    string sen,rep;
    int rep_s,rep_f,rev_s,rev_f,p_s,p_f;
    int n;
    cin>>qst>>n;
    for(int i=0;i<n;i++){
        cin>>sen;
        if(sen=="replace"){
            cin>>rep_s>>rep_f>>rep;
            replace(rep_s,rep_f,rep);
        }
        else if(sen=="reverse"){
            cin>>rev_s>>rev_f;
            reverse(rev_s,rev_f);
        }
        else if(sen=="print"){
            cin>>p_s>>p_f;
            print(p_s,p_f);
        }
    }
    return 0;
}

