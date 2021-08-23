#include<stdio.h>
#include<stdlib.h>
#define max_size 5
int cqueue[max_size],front=-1,rear=-1;
void insert();
void del();
void display();
main()
{
        int choice;
do{
printf("\n1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("\nEnter your choice: ");
scanf("%d",&choice);
                switch(choice)
                {
                    case 1: 
insert();
                    break;
                    case 2:
del();
                    break;
                    case 3:
display();
                    break;
                    case 4:
exit(0);
                    break;
                    default:
printf("\nInvalid choice:\n");
                    break;
                }
}while(choice!=4);
}
void insert()
{
        int item;
        if(front==(rear+1)%max_size)
        {
printf("\nQueue Overflow\n");
        }
        else
        {
printf("Enter the element: ");
scanf("%d",&item);
                rear=(rear+1)%max_size;
cqueue[rear]=item;

                if(front==-1)
                {
                        front=0;
                        rear=0;
                }
        }
}
void del()
{
        int item;
        if(front==-1)
        {
printf("\nQueue Underflow.");
        }
        else
        {
                item=cqueue[front];
printf("\nDeleted element: %d\t",item);
                if(front==rear)
                {
                        front=-1;
                        rear=-1;
                }
                else
                {
                        front=(front+1)%max_size;
                }
        }
}
void display()
{
        int i;
        if(front==-1)
        {
printf("\nQueue is Empty:");
        }
        else
        {
printf("\nThe queue elements:-\n" );
                if(front<rear)
                {
                        for(i=front;i<=rear;i++)
                        {
printf("%d\t",cqueue[i]);
                        }
                }
                else
                {
                        for(i=0;i<=rear;i++)
                        {
printf("%d\t",cqueue[i]);
                        }
                        for(i=front;i<max_size;i++)
                        {
printf("%d\t",cqueue[i]);
                        }
                }
        }
}

