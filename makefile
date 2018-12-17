exe : main.o GradeBook.o
	g++ main.o GradeBook.o -o exe
main.o : main.cpp GradeBook.h
	g++ -c main.cpp
GradeBook.o : GradeBook.cpp GradeBook.h
	    g++ -c GradeBook.cpp
