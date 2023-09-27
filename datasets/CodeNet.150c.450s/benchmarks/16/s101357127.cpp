#include<iostream>
#include<string>
#define MAX_NUM 20000

struct Puddle{
    int left;
    int right;
    int area;
    void setStatus(int x,int y,int z){
        this->left = x;
        this->right = y;
        this->area = z;
    }
    
    void outStatus(){
        std::cout << this->left << ' ' << this->right << ' ' << this->area << '\n';
    }
};

int stack[MAX_NUM];
int sp=0;
Puddle pud[MAX_NUM/2];
int pp=0;

void push(int x){
    stack[sp++] = x;
}

int pop(){
    return stack[--sp];
}

void push_P(Puddle p){
    pud[pp++] = p;
}

Puddle pop_P(){
    return pud[--pp];
}

Puddle makePuddle(int start){
    Puddle p;
    p.setStatus(sp,start,start-sp);
    for(int i=sp;i<=start;i++) push(0);
    return p;
}

bool chk_valley(){
    while(sp>0){
        if(pop() == -1){
            return true;
        }
    }
    return false;
}

int containPuddle(Puddle p){
    int start = pp;
    if(pp==0){
        
        return 0;
    
    }else if(pp>0){
        int count=0;
        while(pp>0){
            Puddle before = pop_P();
            if( before.left < p.left ){
                pp = start;
                return count;
            }else{
                count++;
            }
        }
        pp = start;
        return count;
    }
    return 0;
}

void mergePuddle(Puddle p){
    int count = containPuddle(p);
    if(count == 0){
        push_P(p);
        return;
    }
    int r = p.right;
    int l = p.left;
    int area_sum = p.area;
    for(int i=0;i<count;i++){
        Puddle tmp = pop_P();
        area_sum += tmp.area;
    }
    p.setStatus(l,r,area_sum);
    push_P(p);
}

int main(){
    char ch[MAX_NUM] = {};
    int space=0;
    std::cin >> ch;
    
    for(int i=0;i<MAX_NUM;i++){
        //std::cout << i ;
        if(ch[i] == '\\'){
            push(-1);
            //std::cout << i << "(-1)\n";
        }else if(ch[i] == '/'){
            int start = sp;
            if(chk_valley()){
                Puddle p = makePuddle(start);
                mergePuddle(p);
            }else{
                sp = start;
                push(1);
            }
            //std::cout << i << "(1)\n";
        }else if(ch[i] == '_'){
            push(0);
            //std::cout << i << "(0)\n";
        }else{
            space++;
        }
        //std::cout << '\n';
    }
    
    /*for(int i=0;i<MAX_NUM-space;i++){
        std::cout << pop() << ' ' ;
    }
    std::cout << '\n';*/
    
    int area_sum=0;
    int p=pp;
    
    while(pp>0){
        Puddle p = pop_P();
        area_sum += p.area;
        //p.outStatus();
    }
    
    std::cout << area_sum << '\n';
    std::cout << p ;
    for(int i=0;i<p;i++){
        std::cout << ' ' << pud[i].area ;
    }
    
    std::cout << '\n';
    
    return 0;
    
}

