#include<stdio.h>
int main(){
    int a[20],n,i,c,ins,pos,s,flag=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elemets:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nThe array is: ");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    for(i=1;1>0;i++){
    printf("\n\n---SELECT YOUR CHOICE---\n");
    printf("\n1. Insertion \n2. Deletion \n3. Search \n4. Traversal \n5. Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&c);
    switch(c){
        case 1: printf("\nEnter the element to be inserted: ");
                scanf("%d",&ins);
                printf("\nEnter the position to be inserted: ");
                scanf("%d",&pos);
                if(pos>n){
                    printf("\n Position doesn't exist.");
                }
                else{
                    for(i=0;i<=pos;i++){
                        a[pos-1]=ins;
                    }
                printf("\n Array after insertion: ");
                for(i=0;i<n;i++){
                    printf(" %d ",a[i]);
                }
                }
                break;
        case 2: printf("\nEnter the position to delete: ");
                scanf("%d",&pos);
                for(i=0;i<n;i++){
                    if(pos>n){
                        printf("\nThe position doesn't exist.");
                    }
                    else{
                        for(i=pos-1;i<n;i++){
                            a[i]=a[i+1];
                        }
                        n--;
                        printf("\n Array after deletion: ");
                        for(i=0;i<n;i++){
                            printf(" %d ",a[i]);
                        }
                    }
                }
                break;
        case 3: printf("\nEnter the element to search: ");
                scanf("%d",&s);
                for(i=0;i<n;i++){
                if(s==a[i]){
                    flag=0;
                    break;
                }
                else{
                flag=1;
                }
                }
                if(flag==0){
                    printf("\nElement is found at %d position.",i+1);
                }
                else{
                    printf("\nElement is not found.");
                }
                break;
        case 4: for(i=0;i<n;i++){
                    printf("a[%d]=%d\n",i,a[i]);
                }
                break;
        case 5: exit (0);
        default: printf("\nWrong choice.");
    }
    }
return 0;
}
