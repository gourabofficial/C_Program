#include<stdio.h>
#include<stdlib.h>
#define max 100

int queue[max];
int front = -1;
int rear = -1;

void enqueue(int);
int dequeue();
int isEmpty();
void print();
int isFull();
int peek();

int main(){
    int choice,data;
    while(1){
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.print the first element\n");
        printf("4.print all the element\n");
        printf("5.Quit\n");
        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                  printf("Enter the element to insert the queue: \n");
                  scanf("%d",&data);
                  enqueue(data);
                  printf("%d is insert the queue\n",data);
                  break;
            case 2:
                  data = dequeue();
                  printf("%d deleted in the queue\n",data);
                  break;
            case 3:
                  printf("The first element is %d\n",peek());
                  break;
            case 4:
                  print();
                  break;
            case 5:
                  exit(1);
                  break;

            default:
                  printf("Worng choice\n");
        }
    }
    
}

void enqueue(int data){
     if(isFull()){
        printf("Queue overflow\n");
        exit(1);
     }

    if (front == -1)
    {
        front = 0;
    }
        rear++;
        queue[rear] = data;
    
 
}
int dequeue(){
    int data;
    if(isEmpty()){
        printf("queue is underflow\n");
        exit(1);
    }
    data = queue[front];
    front++;
    return data;
}

int isEmpty(){
    if (front == -1 || front == rear + 1) 
        return 1;
    else
        return 0;
}

int isFull(){
    if(rear == max -1)
        return 1;
    else 
        return 0;
}

int peek(){
    if (isEmpty()){
        printf("Queue is underflow\n");
        exit(1);
    }
    return queue[front];
}

//this print() are no correct.
void print()
{
    int i;
    if(isEmpty()){
        printf("Queue is underflow\n");
        exit(1);
    }
    printf("Queue: \n");
    for(i = front; i <= rear; i++)
    {
        printf("%d\t",queue[i]);
    }
        printf("\n");
    
}
