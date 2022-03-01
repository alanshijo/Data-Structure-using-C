#include<stdio.h>
#include<stdlib.h>
int push(int);
int pop();
struct node
{
    int data;
    struct node *next;
}*top=NULL;
void main()
{
    int value,choice=1;
    while(choice>0)
    {
    printf("\n\n===STACK OPERATIONS===\n");
    printf("\n1. Push \n2. Pop \n3. Display \n4. Exit \n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("\nEnter the value to be inserted: ");
                scanf("%d",&value);
                push(value);
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        case 4: exit(0);
        default: printf("\nInvalid choice.");
    }
    }
    }
int push(value)
{

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    if(top==NULL)
    {
        newNode->next = NULL;
        top=newNode;
        printf("\nValue inserted!");
    }
    else
    {
        newNode->next = top;
        top = newNode;
        printf("\nValue inserted!");
    }


}
int pop()
{
    if(top==NULL)
    {
        printf("\nThe stack is empty.\n");
    }
    else
    {
        struct node *temp;
        temp = top;
        top = temp->next;
        free(temp);
        printf("\nPop operation success!\n");
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if(temp==NULL)
    {
        printf("\nThe stack is empty.");
    }
    else
    {
        printf("\nThe stack is : \n");
    while(temp->next!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("%d-->NULL",temp->data);
    }
}
