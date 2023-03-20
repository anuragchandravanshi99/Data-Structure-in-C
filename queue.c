#include <stdio.h>
struct queue{
    int data;
    struct queue *add;
};
struct queue *start,*temp,*New,*last;
int position =0;
void insert();
void Delete();
void display();

int main() {
    int ch;
    do{
        printf("QUEUE\nPress 1 to insert\nPress 2 to Delete\nPress 3 to Display\nPress 4 to Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("Select right option ");
        }
        
    }while(ch!=4);
    printf("Program quit");
    return 0;
}

void insert(){
    int n;
    printf("Enter a data : ");
    scanf("%d",&n);
    New  = (struct queue *)malloc(sizeof(struct queue));
    New->data = n;
    New->add = NULL;
    if(position==0){
        start = New;
        last = New;
    }else{
        last->add = New;
        last = New;
    }
    position++;
}

void Delete(){
    if(position ==0){
        printf("Create Queue First");
    }else{
        temp = start;
        start = start->add;
        printf("Deletd data = %d\n",temp->data);
        free(temp);
        position--;
    }
}

void display(){
    if(position == 0){
        printf("Queue Not Initiated");
    }else{
        temp = start;
        while(temp!= NULL){
            printf("%d\t",temp->data);
            temp= temp->add;
        }
        printf("\n");
    }
}
