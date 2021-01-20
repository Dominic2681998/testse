#include<stdio.h>
#include <stdlib.h>
#define max 20
int que[max],rear=0,front=-1,i,j,m,n;
int main()
{
    int ch;
    while(1)
    {
        void get();
        void delet();
        void display();
        printf("\n1.Get\n2.Delete\n3.Display\n4.search\n5.exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:get();
                   break;
            case 2:delet();
                break;
            case 3:display();
                break;
            case 4:search();
            break;
            case 5:exit(0);

        }

    }


}
void get()
{
    int num;

    if(front==(rear+1)%max)
    {

        printf("Queue full");

    }
    else
    {
        printf("Enter the data:");
        scanf("%d",&num);
        if (front==-1)
        {

            rear=front=0;


        }

        else
            {
                rear=(rear+1)%max;

            }
            que[rear]=num;
    }


}
void delet()
{
    int val;
    if(front==-1)
    {
        printf("\nUnderflow");
    }
    else
    {
         val=que[front];
        printf("\nElement deleted:%d",val);
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%max;

        }
    }



}

void display()
{
    int i;
    if(front==-1)
    {

        printf("\nUnderflow");
    }
    else
    {
       for(i=front;i<=rear;i++)
       {
           printf("\nElement:%d",que[i]);
       }
        if(front>rear)
        {
            for(i=front;i<max-1;i++)
            {
                printf("\nElement:%d",que[i]);
            }
            for(i=0;i<rear;i++)
            {
                printf("\nElement:%d",que[i]);
            }
        }

    }

}
void search()
{
    int f=1,val,j,k;
    printf("\nEnter the value to be searched:");
    scanf("%d",&val);
    for(i=front;i<=rear;i++)
    {
        if(que[i]==val)
        {
            f=0;
            j=i;
            break;
        }

    }
    if(front>rear)
    {
       for(i=front;i<max-1;i++)
        {
        if(que[i]==val)
        {
            f=0;
            j=i;
            break;
        }

        }
        for(i=0;i<rear;i++)
        {
            if(que[i]==val)
            {
                f=0;
                j=i;
                break;
            }

        }
    }
    if(f==0)
    {

            printf("Item %d found at position %d",val,j);
        }
        else
        {
            printf("\nItem not found");
        }


}
