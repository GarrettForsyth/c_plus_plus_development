# Makefile for inheritance_and_polymorphism
#**************************************************
# Variables to control makefile operation

CXX = clang++
CXXFLAGS = -Wall -g

#**************************************************
# Targets needed to bring the executable up to date

main: main.o Person.o Student.o Professor.o
		$(CXX) $(CXXFLAGS) -o main main.o Person.o Student.o Professor.o

# The main.o target can be written more simply

main.o: main.cpp Person.h Student.h Professor.h
		$(CXX) $(CXXFLAGS) -c main.cpp

Person.o: Person.h

Student.o: Student.h Person.h

Professor.o: Professor.h Person.h
