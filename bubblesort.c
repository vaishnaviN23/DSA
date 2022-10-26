#include<stdio.h>
#include<stdlib.h>
void bubblesort(int*r ,int size){
    int m,e,f,g;
    m=size-2;
    while (m>=0)
    {
        e=0;
        f=1;
        while (e<=m)
        {
            if(r[f]<r[e]){
                g=r[e];
                r[e]=r[f];
                r[f]=g;
            }
            e++;
            f++;
        }
        m--;
    }
    
}
int main(){
    int *x;
    int size ,i;
    printf("enter the requirement: ");
    scanf("%d",&size);
    x=(int*)malloc(sizeof(int)*size);
    for ( i = 0; i < size; i++)
    {
        printf("enter the element:");
        scanf("%d",&x[i]);
    }
    bubblesort(x,size);
    for ( i = 0; i < size; i++)
    {
        printf("%d\n",x[i]);
    }
    free(x);
    return 0;
}
