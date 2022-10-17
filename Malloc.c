#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p;
    int size;
    printf("Enter the number of elements :");
    scanf("%d",&size);
    p = (int*) malloc(size*sizeof(int));
    
    printf("Enter the elements :");
    for(int i=0;i<size;i++)
        scanf("%d",&p[i]);
    printf("The elements are :");
    for(int i=0;i<size;i++)
        printf("%d\n",p[i]);
    free(p);

}