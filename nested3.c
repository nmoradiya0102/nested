#include<stdio.h>  
    int main(){
     
     int a,b,c,d;
      printf("value of A:");
      scanf("%f",&a);
      printf("value of B:");
      scanf("%f",&b);
      printf("value of C:");
      scanf("%f",&c);
      printf("value of D:");
      scanf("%f",&d);
      
    if (a>b && a>c && a>d)
    {
        printf("A is max",a);
    }
    else{
        if (b>a && b>c && b>d)
        {
        printf("B is max",b);
        }
        else{
            if (c>a && c>b && c>d)
            {
                printf("C is max",c);
            }
            else{
                printf("D is max",d);
            }
        }
    }
    return 0;
}
