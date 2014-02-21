#include <stdio.h>
#include <stdlib.h> /* for atoi() */
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "listner_other_function.h"
#include "globals.h"


/*  ************************************************
    Function take input file as input and open the
    file for reading.  it will exit with false if
    file not readable.  else it will print time stamp
    to output file.
    ************************************************/
void init_lister(char fileN[] ){
char *moder = "r";
strcpy(source_name,fileN); // destination, source
source_file = fopen(source_name, moder);

 if(testCase == 2)
   testForCase2(source_file);


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

// continue if is not end of the file.
if( fgets (source_buffer, fileLineLength, source_file)!=NULL ) {
      /* writing content to stdout */
      source_buffer[fileLineLength-1] = '\0';
        // truncate the line array if line size is larger than allowed size
        //if (strlen(source_buffer) > fileLineLength){
        // some code here
        // insert eol at max location
        //}
      value = true;
      line_number += 1;
      //
      sprintf(print_buffer,"%d: %s",line_number,source_buffer);

    print_line(print_buffer);

    }

//value = false;
return value;
}
