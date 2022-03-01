#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main ()
{
    int choice =0;
    while(1>0)
    {
        printf("\nMain Menu");
        printf("\n1. Insert at beginning \n2. Insert at end \n3. Insert at specific location");
        printf("\n4. Delete from Beginning \n5. Delete from last \n6. Delete from specific location");
        printf("\n7. Search for an element \n8. Display \n9. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: beginsert();
                    break;
            case 2: lastinsert();
                    break;
            case 3: randominsert();
                    break;
            case 4: begin_delete();
                    break;
            case 5: last_delete();
                    break;
            case 6: random_delete();
                    break;
            case 7: search();
                    break;
            case 8: display();
                    break;
            case 9: exit(0);
                    break;
            default: printf("Invalid choice.");
        }
    }
}
void beginsert()
{
    struct node *newNode,*temp;
    int item;
    newNode = malloc(sizeof(struct node));
        printf("\nEnter the element: ");
        scanf("%d",&item);
        newNode-> data = item;
        if(head == NULL)
        {
            head = newNode;
            newNode-> next = head;
        }
        else
        {
            temp = head;
            while(temp->next!= head){
                temp = temp->next;
            }
            newNode->next = head;
            temp -> next = newNode;
            head = newNode;
        }
        printf("\nNode inserted\n");
}
void lastinsert()
{
    struct node *newNode,*temp;
    int item;
    newNode = malloc(sizeof(struct node));
        printf("\nEnter data: ");
        scanf("%d",&item);
        newNode->data = item;
        if(head == NULL)
        {
            head = newNode;
            newNode -> next = head;
        }
        else
        {
            temp = head;
            while(temp -> next != head)
            {
                temp = temp -> next;
            }
            temp -> next = newNode;
            newNode -> next = head;
        }
        printf("\nNode inserted\n");
    }
void randominsert()
{
    struct node *newNode,*temp;
    int item, pos;
    newNode = malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d",&item);
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    newNode->data = item;
    if(head==NULL)
    {
        head = newNode;
        newNode->next = head;
        printf("\nNode inserted.");
    }
    else
    {
        temp = head;
        while(temp->data!=pos && temp->next!=NULL)
        {
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        printf("\nNode inserted.");
    }
}
void begin_delete()
{
    struct node *ptr;
    if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nNode deleted\n");
    }

    else
    {   ptr = head;
        while(ptr -> next != head){
            ptr = ptr -> next;
        }
        ptr->next = head->next;
        free(head);
        head = ptr->next;
        printf("\nNode deleted\n");

    }
}
void last_delete()
{
    struct node *ptr, *preptr;
    if (head ->next == head)
    {
        head = NULL;
        free(head);
        printf("\nNode deleted\n");
    }
    else
    {
        ptr = head;
        while(ptr ->next != head)
        {
            preptr=ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr -> next;
        free(ptr);
        printf("\nNode deleted\n");
    }
}
void random_delete()
{

    struct node *newNode,*temp1=head, *temp2=NULL;
    int item, pos;
    newNode = malloc(sizeof(struct node));
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    if(head==NULL)
    {
        printf("\nDeletion not possible.");
    }
    else
    {
        while(temp1->data!=pos)
        {
            temp2=temp1;
            if(temp1->next==head)
            {
                printf("\nGiven node is not in this list.");
                free(temp1);
               // free(temp2);
            }
            else
            {
                temp1=temp1->next;
            }
            if((temp1->next == head)&&(temp2==NULL))
            {
                head=NULL;
                free(temp1);
               // free(temp2);
            }
            else if(temp1==head)
            {
                temp2=head;
                while(temp2->next!=head)
                {
                    temp2=temp2->next;
                }
                head=head->next;
                temp2->next=head;
               // free(temp1);
                free(temp2);
            }
            else if(temp1->next==head)
            {
                temp2->next=head;
                free(temp1);
                //free(temp2);
            }
            else
            {
                temp2->next= temp1->next;
                //free(temp1);
                free(temp2);
            }

        }
        printf("\n Node deleted.");
    }
}
void search()
{
    struct node *ptr;
    int item,i=0,flag=1;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&item);
        if(head ->data == item)
        {
        printf("item found at location %d",i+1);
        flag=0;
        }
        else
        {
        while (ptr->next != head)
        {
            if(ptr->data == item)
            {
                printf("item found at location %d ",i+1);
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
            i++;
            ptr = ptr -> next;
        }
        }
        if(flag != 0)
        {
            printf("Item not found\n");
        }
    }

}

void display()
{
    struct node *ptr;
    ptr=head;
    if(head == NULL)
    {
        printf("\nList is empty.");
    }
    else
    {
        printf("\n Circular Linked List : \n");

        while(ptr -> next != head)
        {

            printf("%d\n", ptr -> data);
            ptr = ptr -> next;
        }
        printf("%d\n", ptr -> data);
    }

}
