# include <stdio.h>
# include <conio.h>
# include <graphics.h>
//Rahul Ahmed-2014755014
int main()
{
int xc,yc,r,d,x,y;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"");
printf(" Enter the values of center : ");
scanf("%d %d",&xc,&yc);
printf("Enter the radius: ");
scanf("%d",&r);
x = 0;
y = r;
d=3-(2*r);
for(x=0; x<=y; x++)
{
if(d < 0)
{
d = d + (4 * x)+6;
}
else
{y=y-1;
d = d +4 *(x-y)+10;
}
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+x,yc+y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc-x,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc-y,yc+x,WHITE);
}
getch();
closegraph();
}
