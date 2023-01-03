#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define SIZE 10
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int val){
    if(rear == SIZE-1){
        printf("queue is full\n");
    }
    else if(front == -1 && rear == -1 ){
        front=rear=0;
        queue[rear] = val;
    }
    else{
        rear++;
        queue[rear] = val;
        printf("\ninserted val %d:",val);
    }
    
}


void dequeue(){
    if(front==-1 && rear ==-1){
        printf("queue is empty \n");    
    }
    else if(front == rear ){
        // when elements in queue is only one 
        rear = front = -1;
    }else{
        printf("dequeue removed element %d\n", queue[front]);
        front++;
    }
}


void display(){
    if(front==-1 && rear == -1){
        printf("queue is empty\n");
    }
    else {
        int i;
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}


void main(){
    int val;
    int choice;
    while(1){

        printf("Enter the value to OPTION");
        printf("\n 1.enqueue\n 2.dequeue \n 3.display \n 4.exit\n");
        printf("\nOPTION : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
              printf("\nEnter the value to enqueue : ");
              scanf("%d",&val);
              enqueue(val);
              break;
        case 2: dequeue();
              break;
        case 3:display();
               break;
        case 4:exit(0);
                

        default:printf("wrong input\n");        
        }
    }
}






