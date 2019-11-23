#ifndef ARTICOLO_H
#define ARTICOLO_H

#define MAX_TITLE 80
#define MAX_TEXT 1024

struct articolo{
    char title[MAX_TITLE];
    char text[MAX_TEXT];
};
typedef struct articolo Articolo;

void articolo_init(Articolo *a);
void set_title(Articolo *a, char dst[]);
void set_text(Articolo*a, char dst[]);
void articolo_print(Articolo *a);

#endif