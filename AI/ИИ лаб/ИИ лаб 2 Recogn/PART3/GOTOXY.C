/* put cursor at x,y                        28.09.98
   ��⠭���� ����� � ������ � ���न��⠬� x,y */
#include <dos.h>

gotoxy (x,y)
     int x,y;
{
   union REGS regs;

   regs.h.ah=2;
   regs.h.dh=y;
   regs.h.dl=x;
   regs.h.bh=0;
   int86 (16, &regs, &regs);
   return;
}
