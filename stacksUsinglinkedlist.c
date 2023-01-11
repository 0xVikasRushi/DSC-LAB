#include <stdio.h>
#include <stdlib.h>
struct Node { 
    int data;
    struct node *next; 
}*front=NULL,*rear=NULL;

void push(int val){
    struct Node *newnode;
    newnode = (struct Node *) malloc(sizeof(struct Node));
    newnode->data = val;
  if(front==NULL){
      front=rear=newnode;
  }else{
      rear->next = newnode;
      rear = newnode;
  }
}


void pop(){
    if(front==NULL){
        printf("queue is empty");
    }else{
        struct Node *temp = front;
        front = front->next;
        free(temp);
    }
    
}

void display(){
    if(front == NULL){
        printf("empty");
    }else{
        struct Node *temp = front;
      while(temp->next!=NULL){
            printf("%d-->",temp->data);
            temp=temp->next;
        }
        printf("%d--->NULL\n",temp->data);
    }
        
}

int main()
{
    printf("Hello World");
    
    int choice;
    int val;
    
    while(1){
        printf("Enter the option \n");
        printf("1.push \n 2.pop \n 3.display \n4.exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                    printf("\nEnter the value to inserted : ");
                    scanf("%d",&val);
                    push(val);
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    display();
                    break;
            case 4: 
                    exit(0);
            default:
                    printf("Wrong options");
        }
    }
    
    return 0;
}
