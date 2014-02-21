#!/bin/bash
# File: Makefile

lister: listner_other_function.o listner_print.o  listner2_test.o #test_who globals.h
	gcc -o lister listner2.c listner_other_function.o listner_print.o listner2_test.o

listner_other_function.o: listner_other_function.c globals.h listner_other_function.h
	gcc -c listner_other_function.c 
	
listner_print.o: listner_print.c globals.h listner_print.h
	gcc -c listner_print.c 

listner2_test.o: listner2_test.c
	gcc -c listner2_test.c 


#test_who: listner2_test.o  
#	gcc -o test_who listner2_test.c  

# !!
# this make is expecting one main in all the .c files
