#ifndef _lab2_globals
#define _lab2_globals

//  define global variable
#define MAX_LINES_PER_PAGE  40
#define fileNameLength  32
#define dateTimeLength  32
#define fileLineLength  256

//  initialize file pointers and other variables
FILE *source_file, *outputFile;
//char *moder = "r";
//char *modew = "w";
char source_name[fileNameLength];
char dateAndTime[dateTimeLength];

//  get system time now
time_t now;
extern int line_number;
#endif
