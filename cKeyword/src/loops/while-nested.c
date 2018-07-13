#include <stdio.h>
int main() 
{
int r,c,num; 
 
r=1; 
 
while ( r <= 10) 
 
{ 
c=1; 
while(c <= 10) 
{ 
 
num=r*c;
 
printf(" %3d",num);
c=c+1; 
 
} 
r=r+1; 
printf("\n");
} 
printf("\n-----------------------------------digitalpadm.com\n");
return 0; 
 
}
