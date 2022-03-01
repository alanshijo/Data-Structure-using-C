#include<stdio.h>
void main()
{
    int i,j,m,n,p,a[50],b[50],c[50],temp;
    printf("\nEnter the size of first array: ");
    scanf("%d",&m);
    printf("\nEnter the elements of first array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe first array is: ");
    for(i=0;i<m;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nEnter the size of second array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of second array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nThe second array is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",b[i]);
    }
    p = m + n;
    j=0;
    for(i=0;i<p;i++)
    {
        if(i<m)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[j];
            j++;
        }
    }
    printf("\n\nThe third array will be: ");
    for(i=0;i<p;i++)
    {
        printf(" %d ",c[i]);
    }
    for(i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\n\nThe sorted array is: ");
    for(i=0;i<p;i++)
    {
        printf(" %d ",c[i]);
    }
}
