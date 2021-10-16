#include <iostream>
#include <math.h>

using namespace std;

int main()
{int x , y;  int z = 0;
cout<<"Enter Number\n";
cin>>x;  
for(int i=1; i < x; i *= 10)  
{y = x/i%10;
z = 10*z + y;
}
    if(x == z)
    {cout<<"Number is palindrome";}
    else
    cout<<"Number is not a palindrome";
    
    
    
    
    return 0;}