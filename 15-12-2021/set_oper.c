#include<stdio.h>
#include<stdlib.h>
void uni();
void inter();
void diff();
void equal();
void main()
{
    int s1[100], s2[100],s[100], l1, l2, i, choice;
    printf("---SET OPERATIONS---\n");
    printf("\n1. Union \n2. Intersection \n3. Difference \n4. Equality \n5. Exit");
    do{
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: uni();
                break;
        case 2: inter();
                break;
        case 3: diff();
                break;
        case 4: equal();
                break;
        case 5: exit(0);
                break;
        default: printf("\n Invalid choice.");
    }
    }while(choice!=0);
}
void uni()
{
    int s1[100], s2[100],s[100], l1, l2, i;
    printf("Enter the size of set 1: ");
    scanf("%d",&l1);
    printf("\nEnter the size of set 2: ");
    scanf("%d",&l2);
    if(l1 != l2)
    {
        printf("\nTwo sets are not compatible for union.");
    }
    else
    {
    printf("\n the elements of set 1: ");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);
    }

    printf("\n the elements of set 2: ");
    for(i=0;i<l2;i++)
    {
        scanf("%d",&s2[i]);
    }
    for(i=0;i<l1;i++)
        {
            s[i] = s1[i] || s2[i];
        }
        printf("\n S1 U S2: ");
        for(i=0;i<l1;i++)
        {
            printf(" %d ",s[i]);
        }
    }
}
void inter()
{
    int s1[100], s2[100],s[100], l1, l2, i;
    printf("Enter the size of set 1: ");
    scanf("%d",&l1);
    printf("\nEnter the size of set 2: ");
    scanf("%d",&l2);
    if(l1 != l2)
    {
        printf("\nTwo sets are not compatible for intersection.");
    }
    else
    {
    printf("\n the elements of set 1: ");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);
    }

    printf("\n the elements of set 2: ");
    for(i=0;i<l2;i++)
    {
        scanf("%d",&s2[i]);
    }
    for(i=0;i<l1;i++)
        {
            s[i] = s1[i] & s2[i];
        }
        printf("\n S1 ∩ S2: ");
        for(i=0;i<l1;i++)
        {
            printf(" %d ",s[i]);
        }
    }
}
void diff()
{
     int s1[100], s2[100],s[100], l1, l2, i;
    printf("Enter the size of set 1: ");
    scanf("%d",&l1);
    printf("\nEnter the size of set 2: ");
    scanf("%d",&l2);
    if(l1 != l2)
    {
        printf("\nTwo sets are not compatible for difference.");
    }
    else
    {
    printf("\n the elements of set 1: ");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);
    }

    printf("\n the elements of set 2: ");
    for(i=0;i<l2;i++)
    {
        scanf("%d",&s2[i]);
    }
    for(i=0;i<l1;i++)
        {
            s2[i] = ~s2[i];
        }
    for(i=0;i<l1;i++)
        {
            s[i] = s1[i] & s2[i];
        }
        printf("\n S1 - S2: ");
        for(i=0;i<l1;i++)
        {
            printf(" %d ",s[i]);
        }
    }
}
void equal()
{
    int s1[100], s2[100],s[100], l1, l2, i, count=0;
    printf("Enter the size of set 1: ");
    scanf("%d",&l1);
    printf("\nEnter the size of set 2: ");
    scanf("%d",&l2);
    if(l1 != l2)
    {
        printf("\nTwo sets are not compatible for equality.");
    }
    else
    {
    printf("\n the elements of set 1: ");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);
    }

    printf("\n the elements of set 2: ");
    for(i=0;i<l2;i++)
    {
        scanf("%d",&s2[i]);
    }
        for(i=0;i<l1;i++)
        { if(s2[i]!=s1[i])
        {
            count++;
        }
        }
        if(count>0)
        printf("the sets are not equal:");

        else
        printf("the sets are equal:");
    }
}


