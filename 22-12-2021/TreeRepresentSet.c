#include<stdio.h>
#include<stdlib.h>
int unin(int x, int y);
int find(int x);
int find(int y);
void display();
int s[50]={0},n,i,a,b,choice=0;
void main()
{
    int x,y,a,b;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    do
    {
        printf("\nEnter the indexes: ");
        scanf("%d%d",&x,&y);
        unin(x,y);
        display();
        printf("\nContinue? Enter '1': ");
        scanf("%d",&choice);
    }
    while(choice==1);
}
int unin(int x, int y)
{
    a = find(x);
    b = find(y);
    if(a!=b)
    {
        s[b]=a;
    }
}
int find(int a)
{
    if(s[a]==0)
    {
        return a;
    }
    else
    {
        find(s[a]);
    }
}
void display()
{
    for(i=1;i<=n;i++)
    {
        printf(" %d ",s[i]);
    }
}

