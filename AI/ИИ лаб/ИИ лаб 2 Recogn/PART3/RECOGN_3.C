/* search for a triangl and square      28.09.98
   ���� ��㣮�쭨�� � ������ */
#include <stdio.h>

recognize_3()
{
   int x,y,t;

for (t=0; t<2; )
 { x=y=0;
   while (find_point (x, y, &x, &y))
     {
       if (istriangle(x,y)) 
         {
	   gotoxy (t*40,0); t++;
	   printf("triangle at %d %d ", x, y);
           break;
	 }
       x++;
     }
 }
   clear_db();
   x=y=0;
   while (find_point(x,y,&x,&y)) 
     {
       if (issquare(x,y)) 
        {
          gotoxy(0,1);
          printf("square at %d %d ",x,y);
          break;
	}
       x++;
     }
return;
}
