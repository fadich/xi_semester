/* search for a triangl and square      28.09.98
   ���� ��㣮�쭨�� � ������ */
#include <stdio.h>

recognize()
{
   int x,y;

   x=y=0;
   while (find_point (x, y, &x, &y))
     {
       if (istriangle(x,y)) 
         {
	   gotoxy (0,0);
	   printf("triangle at %d %d ", x, y);
           break;
	 }
       x++;
     }
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
