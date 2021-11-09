#include<stdio.h>

int main(){ int A,B,C; 
  
    printf("Enter  A: ");
    scanf("%d", &A);
  printf("Enter  B: ");
    scanf("%d", &B);
    printf("Enter C: ");
    scanf("%d", &C);
    if (A>B & A>C)
        printf("Triangle is equilateral");
    else if (A != B & B!= A && B != C)
        printf("Triangle is scalene");
    else  
        printf("Triangle is isosceles");
    
    
    
    
    
      return 0;
}