#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
int a,CIDR,x,y,z,p;
scanf("enter the IPV4",&x,&y,&z,&p);
const char *input = "x" "." "y" "." "z" "." "p";
scanf("%d", &CIDR);
if(CIDR >= 0 && CIDR <= 32){
a =  pow(2,32 - CIDR);
printf("number of ip's is %d \n",a);
printf("total usable ip's are %d",(a-2));
}
else
{
    printf("CIDR Value cannot Exceed 32");
}
}
