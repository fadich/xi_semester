/* check for a triangle            28.09.98
   �஢�ઠ ��㣮�쭨�� */

int istriangle (x,y)
    int x,y;
{
   if (check_point(x+1,y+1) && check_point(x-1,y+1))
      return 1;

   return 0;
}
