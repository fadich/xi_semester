/* check for a square by key points       28.09.98
   �஢�ઠ ������ �� ���祢�� �窥 */

int issquare(x,y)
    int x,y;
{
   if (check_point(x+10,y) && check_point (x,y+5) &&
       !check_point(x,y+6))  return 1;

   return 0;
}
