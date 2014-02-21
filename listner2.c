#include <stdio.h>
#include <stdlib.h> /* for atoi() */
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "listner_print.h"
#include "globals.h"
#include "listner_other_function.h"
#include "listner2_test.h"


//  function declaration before use
void init_lister(char fileN[] );
bool get_source_line();
int line_number = 0;
bool testing = false;
int testCase = 0;
/*  ************************************************
    main program, program will reads input text file
    and add line number in front of each line, then
    output the result to user or output file.
    ************************************************/
int main(int argc, char *argv[]){
bool continueReadingFile = true;  // set var to true
char * myString = "";

     // check for input file, exit if no input file
    // if (argc <2 ){
    //      printf("input is: %d",argc);
    //      return 0;
   //  }


        testing = true;


    if (testing)
        testForCase1(argc);


    if ( argc >= 3 )
    {
     testCase =  atoi(argv[2]);
    }
    else
        {testing = false ;    }

// check existing of input file
if (testCase == 3)
    {testForCase3(argv[1]);

    }
 else
{init_lister(argv[1]);}

// loop thru the text file line by line until eof
while ( continueReadingFile){
  // loop breaks if raches eof with false return
  continueReadingFile = get_source_line();
}
printf("\nend reading file !\nTotal lines: %d ", line_number);

return 0;
}



