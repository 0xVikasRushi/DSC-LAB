#include<stdio.h>
#define SIZE 10

int stack[SIZE];
int top =-1;


void push(){
    if(top==SIZE-1){
        printf("STACK IS FULL");
    }else{
        int val;
        printf("Enter val : ");
        scanf("%d",&val);
        top++;
        stack[top] = val;
    }
}
void pop(){
    if(top==-1){
        printf("STACK IS empty");
    }else{
        printf("%d",stack[top]);
        top--;
    }
}

void display(){
    if(top==-1){
        printf("STACK IS empty");
    }else{
        int i;
        for(i=top;i>=0;--i){
            printf("%d\n",stack[i]);
        }
    }
}



void main(){
    int choice;
    while(1){
        printf("Enter the value to OPTION");
        printf("\n1.insert\n 2.pop \n 3.display \n 4.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                    push();
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    exit(0);
                    break;
            default:
                    printf("Wrong options");
        }
    }
}
