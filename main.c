#include<stdio.h>
#include "articolo.h"
#include<string.h>

int main(){
Articolo a1;
Articolo a2;
articolo_init(&a1);
set_title(&a1,"Socrate ad Afragola");
set_text(&a1,"Cerco l'uomo");
articolo_print(&a1);

articolo_init(&a2);
set_title(&a2,"Oggi ERASMUS day");
set_text(&a2,"A scuola oggi non si va in laboratorio");
articolo_print(&a2);
return 0;
}