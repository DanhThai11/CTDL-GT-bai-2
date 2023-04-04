//https://laptrinhtudau.com/cai-dat-ngan-xep-stack-bang-mang-c-c//
#include <stdio.h>
#define MAX 100
struct stack{
    int top;
    int A[MAX];
};
typedef struct stack STACK;
void Init (STACK &s){
    s.top=-1;
}
int Empty (STACK s){
    if (s.top == -1){
        return 1;
    }
    return 0;
}
int IsFull (STACK s){
    if (s.top==MAX-1){
        return 1;
    }
    return 0;
}
void Push(STACK &s,int x){
    if(IsFull(s)==0){ 
        s.top++;
        s.A[s.top]=x;
    }
}
int Pop(STACK &s){
    int x;
    if(!Empty(s)){
        x = s.A[s.top];
        s.top--;
    }
    return x;
}
int Top(STACK &s){
    int x;
    if(!Empty(s)){
        x = s.A[s.top];
        return x;
    }else{
        return NULL;
    }
}
void Input(STACK &s, int n){
    for(int i = 0; i< n; i++){
        int x;
        printf("Nhap gia tri phan tu thu %d: ",i);
        scanf("%d",&x);
        Push(s,x);
    }
}
void Output(STACK s){
    for(int i = s.top; i > -1; i--){
        printf("%d \n",s.A[i]);
    }
}
int main(){
    STACK s;
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    Init(s);
    Input(s,n);
    printf("Stack vua nhap la: \n");
    Output(s);
    printf("Top cua stack voi ham top %d",Top(s));
    printf("\nTop cua stack voi ham pop %d \n",Pop(s));
    printf("Stack sau khi pop la\n");
    Output(s);
}
