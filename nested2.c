#include<stdio.h>  
    int main(){
     
     int a,b,c;
      printf("value of A:");
      scanf("%f",&a);
      printf("value of B:");
      scanf("%f",&b);
      printf("value of C:");
      scanf("%f",&c);
      
     if (a<b && a<c)
    {
        printf("A is min",a);
    }
    else{
        if (b<a && b<c)
        {
        printf("B is min",b);
        }
        else{
        printf("C is min",c);
        }
    }
    return 0;
}
     
