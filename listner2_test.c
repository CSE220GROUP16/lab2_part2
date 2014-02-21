#include <stdio.h>
#include <stdlib.h> /* for atoi() */
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "listner_print.h"
#include "globals.h"
#include "listner_other_function.h"

 void  testForCase3( char argv[])
 {
printf ("03: Pass or Fail:\n");
printf("\t:%s:\n", (init_lister(argv), "if you see noting between the colon and the if, then test 3 pass the function returned void else test 3 failed"));
 }

 void  testForCase1(int argc )
 {
    if (argc < 2)
        {

        printf("01: Failed: missing input file, should be ./listner inputfile.c you need to put source file to read\n");
    exit(1);}
    else
    {
        printf("01 : Passed: input file was entered as perameter  \n");
    }

 }

 void testForCase2( FILE *source_file)
 {
     if (source_file == NULL) {
  printf("02: Failed: input file: %s  cannot be found.  exited from testing\n", source_name);
  exit(1);
 }
 else
 {printf("02 : Passed: input file existed \n");}


 }
