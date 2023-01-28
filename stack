#include <stdio.h>
#define maxsize 10

int stack[maxsize],top=-1;

void push();
void pop();
void display();

int main() {
    int ch;
    do{
        printf("----------Stack-------------");
        printf("\n\tPress 1 to push");
        printf("\n\tPress 2 to pop");
        printf("\n\tPress 3 to display");
        printf("\n\tPress 4 to exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Enter correct value\n");
        }
    }while(ch!=4);
    
}

void push(){
    if(top==9){
        printf("Stack Overflow\n");
    }else{
        top++;
        printf("Enter data");
        scanf("%d",&stack[top]);
        printf("%d is stored at position %d\n",stack[top],top+1);
    }
}

void pop(){
    if(top==-1){
        printf("Stack underflow\n");
    }else{
        printf("%d is deleted from position %d\n",stack[top],top+1);
        top--;
    }
}

void display(){
    if(top==-1){
        printf("Stack underflow\n");
    }else{
        for(int i=0 ; i<=top ; i++){
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
}
