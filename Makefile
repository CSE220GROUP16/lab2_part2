#!/bin/bash
# File: Makefile

lab2: listner_other_function.o listner_print.o 
	gcc -o lab2 listner2.c listner_other_function.o listner_print.o 

listner_other_function.o: listner_other_function.c
	gcc -c listner_other_function.c 
	
listner_print.o: listner_print.c
	gcc -c listner_print.c 
# !!
# this make is expecting one main in all the .c files
