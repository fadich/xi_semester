/* return true if out-of-range coordinates     28.09.98
   �஢�ઠ ����� �� �窠 �� ����� */

 char outrange (x,y)
      int x,y;
{
   if(x<0 || x>79) return 1;
   if(y<0 || y>29) return 1;
   return 0;
}
