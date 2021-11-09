#include<stdio.h>

int main(){ int A,B,C; 
  
    printf("Enter length A: ");
    scanf("%d", &A);
  printf("Enter lenght B: ");
    scanf("%d", &B);
    printf("Enter lenght C: ");
    scanf("%d", &C);
    if (A==B & B==C)
        printf("Triangle is equilateral");
    else if (A != B & B!= A && B != C)
        printf("Triangle is scalene");
    else  
        printf("Triangle is isosceles");
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}