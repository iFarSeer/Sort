CC = g++
objects = SelectSort.o BubbleSort.o SortBase.o main.o
sort : $(objects)
	CC -o sort $(objects)
main.o : main.cpp
	CC -c main.cpp
SortBase.o : SortBase.cpp SortBase.h
	CC -c SortBase.cpp
BubbleSort.o : BubbleSort.cpp BubbleSort.h
	CC -c BubbleSort.cpp
SelectSort.o : SelectSort.cpp SelectSort.h
	CC -c SelectSort.cpp
clean :
	rm sort $(objects)