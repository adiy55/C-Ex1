CC = gcc
FLAGS = -Wall -g

all: mains maindloop maindrec

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o libclassloops.so -lm

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) main.o -o libclassrec.so -lm

main.o: main.c NumClass.h

basicClassification.o: basicClassification.c #NumClass.h
	$(CC) -c basicClassification.c -lm

advancedClassificationLoop.o: advancedClassificationLoop.c #NumClass.h
	$(CC) -c advancedClassificationLoop.c -lm

advancedClassificationRecurion.o: advancedClassificationRecursion.c #NumClass.h
	$(CC) -c advancedClassificationRecursion.c

loops: libclassloops.a

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	 ar -rc libclassloops.a advancedClassificationLoop.o # creates library

recursives: libclassrec.a

libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	 ar -rc libclassrec.a advancedClassificationRecursion.o # creates library

recursivesd: libclassrec.so

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	 $(CC) -shared libclassrec.so advancedClassificationRecursion.o # creates library

loopd: libclassloops.so

libclassloops.so: advancedClassificationRecursion.o basicClassification.o
	 $(CC) -shared libclassloops.so advancedClassificationLoop.o # creates library

clean: 
	rm *.o *.a *.so