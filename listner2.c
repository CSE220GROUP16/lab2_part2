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
    //test for input parameter
    testing = true;

    //the belows will always be executed to verify input file
    if (testing)
        testForCase1(argc);

    //testcase variable is set for each of the three test cases
    //see submitted document for how to use test case
    //the third parameter was used here as input argument which
    //indicate that cases being tested.
    if ( argc >= 3 )
    {
        testCase =  atoi(argv[2]);
    }
    else
        {testing = false ;    }

    // testing for test case 3
    if (testCase == 3)
    {
        testForCase3(argv[1]);
    }
    else
    {init_lister(argv[1]);}

// loop thru the text file line by line until eof
while ( continueReadingFile){
  // loop breaks if raches eof with false return
  continueReadingFile = get_source_line();
}
printf("\nEnd reading file !\nThe total number of lines: %d ", line_number);

return 0;
}



