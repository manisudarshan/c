#include<studio.h>
void main()
{
int a,b,c;
printf{"/n Enter the numbers"};
scanf{"%d\t%d\t%d",&a,&b,&c};
if((a>b)&&(a>c))
printf{"\n %d is the greatest number",a};
else{
if((b>a)&&(b>c))
printf{"%d is the greatest number",b};
else
if((c>a)&&(c>b))
printf{"%d is the greatest number",c};
}
getch();
}
