#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("value of A:");
    scanf("%d",&a);
    printf("value of B:");
    scanf("%d",&b);
    printf("value of C:");
    scanf("%d",&c);
    printf("value of D:");
    scanf("%d",&d);
    printf("value of E:");
    scanf("%d",&e);
    if (a<b && a<c && a<d && a<e)
    {
    printf("A is min",a);
    }
    else{
        if (b<a && b<c && b<d && b<e)
        {
        printf("B is min",b);
        }
        else{
            if (c<a && c<b && c<d && c<e)
            {
            printf("C is min",c);
            }
            else{
                if (d<a && d<b && d<c && d<e)
                {
                printf("D is min",d);
                }
                else
                {
                printf("E is min",e);
                }
            }
        }
    }
    return 0;
}
