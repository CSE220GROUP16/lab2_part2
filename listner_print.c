#include <stdio.h>
#include <stdlib.h> /* for atoi() */
#include <string.h>
#include <time.h>
#include <stdbool.h>

#include "listner_print.h"
#include "globals.h"

void print_line(char print_buff[]){
    static int  line_count =0;
    line_count +=1;
    if ((line_count % MAX_LINES_PER_PAGE) == 1)
    {print_page_header(); }

    printf("%s",print_buff);
}
void print_page_header(){
    printf("**************************************\n");
    printf("************* Page Header  ***********\n");
    printf("*************              ***********\n")     ;
    printf("**************************************\n");
}
