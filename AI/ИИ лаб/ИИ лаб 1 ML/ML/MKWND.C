#include <conio.h>
void mkwnd (x_LT,y_LT,x_RB,y_RB,clr_T,clr_BG)
{
 /*  Turbo C
	 LT - left-top
	 RB - right-bottom
      clr_T - 梥� ⥪��
     clr_BG - 梥� 䮭�
  */

  textcolor(clr_T);
  textbackground(clr_BG);
  window(x_LT,y_LT,x_RB,y_RB);
  clrscr();

  return;
}
