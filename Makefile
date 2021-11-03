CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_HEADER = NumClass.h
FLAGS = -Wall -g

all: mains maindloop maindrec #loops loopd recursives recursivesd

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a -lm

maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so -lm

maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so -lm

loops: libclassloops.a

recursives: libclassrec.a

loopd: libclassloops.so

recursivesd: libclassrec.so

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	 ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o # creates library

libclassloops.so: advancedClassificationLoop.o basicClassification.o
	 $(CC) -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o # creates dynamic library

libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	 ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o # creates library

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	 $(CC) -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o # creates dynamic library

main.o: main.c NumClass.h

basicClassification.o: basicClassification.c $(OBJECTS_HEADER)
	$(CC) -c basicClassification.c -lm

advancedClassificationLoop.o: advancedClassificationLoop.c $(OBJECTS_HEADER)
	$(CC) -c advancedClassificationLoop.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c $(OBJECTS_HEADER)
	$(CC) -c advancedClassificationRecursion.c

#.PHONY: clean
clean: 
	rm -f *.o *.a *.so mains maindloop maindrec