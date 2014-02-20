#!/bin/bash
# File: Makefile

lab2: listner_print.o
	gcc -o lab2 listner2.c listner_print.o

listner_print.o: listner_print.c
	gcc -c -o listner_print.c listner_print.o 

# !!
# this make is expecting one main in all the .c files