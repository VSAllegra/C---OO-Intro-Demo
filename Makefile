# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
main: main.o Point.o Shape.o Sphere.o Box.o Cone.o
	$(CC) $(CFLAGS) -o main main.o 
 
# The main.o target can be written more simply
 
main.o: main.cpp Point.h Shape.h Sphere.h Box.h Cone.h
	$(CC) $(CFLAGS) -c main.cpp
 
Point.o: Point.h
 
Shape.o: Shape.h Point.h

Cone.o: Shape.h Point.h Cone.h

Sphere.o: Shape.h Point.h Sphere.h

Box.o: Shape.h Point.h Box.h
