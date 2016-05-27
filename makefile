objects = SelectSort.o BubbleSort.o SortBase.o main.o
sort : $(objects)
	g++ -o sort $(objects)


SortBase.o : SortBase.h
BubbleSort.o : BubbleSort.h
SelectSort.o : SelectSort.h
main.o : main.cpp

#.PHONY : clean
clean :
	-rm $(objects)
	-rm sort
