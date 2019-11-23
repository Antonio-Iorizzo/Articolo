#include"articolo.h"
#include<string.h>
#include<stdio.h>

void articolo_init(Articolo *a){
    a->title[0]='\0';
    a->text[0]='\0';
}

void set_title(Articolo *a, char dst[]){
    strncpy(a->title,dst,MAX_TITLE);
    a->title[MAX_TITLE-1]='\0';
}

void set_text(Articolo*a, char dst[]){
    strncpy(a->text,dst,MAX_TEXT);
    a->text[MAX_TEXT-1]='\0';
}

void articolo_print(Articolo *a){
    printf("%s\n",a->title);
    printf("-------\n");
    printf("%s\n\n",a->text);
}