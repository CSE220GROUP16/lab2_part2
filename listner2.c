//  include all header files a
#include <stdio.h>
#include <stdlib.h> /* for atoi() */
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "listner_print.h"
#include "globals.h"

//  initialize file pointers and other variables
FILE *source_file, *outputFile;
char *moder = "r";
char *modew = "w";
char source_name[fileNameLength];
char dateAndTime[dateTimeLength];

//  get system time now
time_t now;
int line_number = 0;
//time(&now);
//printf("%s",ctime(&now));

//  function declaration before use
void init_lister(char fileN[] );
bool get_source_line();

/*  ************************************************
    main program, program will reads input text file
    and add line number in front of each line, then
    output the result to user or output file.
    ************************************************/
int main(int argc, char *argv[]){
bool continueReadingFile = true;  // set var to true

     // check for input file, exit if no input file
     if (argc <2 ){
          printf("input is: %d",argc);
          return 0;
     }
// check existing of input file
init_lister(argv[1]);

// loop thru the text file line by line until eof
while ( continueReadingFile){
  // loop breaks if raches eof with false return
  continueReadingFile = get_source_line();
}
printf("\nend reading file !\nTotal lines: %d ",line_number);

return 0;
}

/*  ************************************************
    Function take input file as input and open the
    file for reading.  it will exit with false if
    file not readable.  else it will print time stamp
    to output file.
    ************************************************/
void init_lister(char fileN[] ){

strcpy(source_name,fileN); // destination, source
source_file = fopen(source_name, moder);
if (source_file == NULL) {
  printf("Can't open input file %s!\n", source_name);
  exit(1);
}
time(&now);
sprintf(dateAndTime, "%s", ctime(&now));
printf("input file name is : %s  time is: %s", source_name, dateAndTime );

}

/*  ************************************************
    function reads text line by line with fgets as
    line in not NULL.
    ************************************************/
bool get_source_line(){

bool value = false;
char source_buffer[fileLineLength];
char print_buffer[fileLineLength];
if( fgets (source_buffer, fileLineLength, source_file)!=NULL ) {
      /* writing content to stdout */
      //puts(source_buffer);
      value = true;
      line_number += 1;
      sprintf(print_buffer,"%d: %s",line_number,source_buffer);

    // truncate the line array if line size is larger than allowed size
    // some code here
    // insert eol at max location


    print_line(print_buffer);

    // swap character back
   }
//value = false;
return value;
}

