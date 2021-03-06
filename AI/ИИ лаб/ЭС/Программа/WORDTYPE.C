/* WordType.c                C-UNIX                       26.03.93
   CADSHELL - complex
*/
#include <stdio.h>
#include <string.h>
#include "expert.h"

int WordType (wd)
   char *wd;
{
  switch (wd[0])
   {
     case 'R': if (!strcmp (wd, "RULE")) return 1;
               break;
     case '': if (!strncmp (wd, "", 7) ||
                   !strncmp (wd, "เ ขจซฎ", 7))
                       return 1;
               break;
     case 'I': if (!strcmp (wd, "IF")) return 2;
               break;
     case '': if (!strncmp (wd, "", 4) ||
                   !strncmp (wd, "แซจ", 4))
                       return 2;
               break;
     case 'c': if (!strcmp (wd, "cf")) return 3;
               break;
     case '':
     case 'ช': if (!strncmp (wd, "", 2) ||
                   !strncmp (wd, "ชใ", 2))
                       return 3;
     case 'T': if (!strcmp (wd, "THEN")) return 4;
     case '': if (!strncmp (wd, "", 2) ||
                   !strncmp (wd, "ฎ", 2))
                       return 4;
               break;
     case 'a': if (!strcmp (wd, "and")) return 5;
               break;
     case 'จ': if (strlen (wd) == 1)  return 5;
    }
  return 6;
}
/* WordType ----------------------------------------------------------- */
