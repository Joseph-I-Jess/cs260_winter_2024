# Made for Linux...
CC=gcc
CXX=g++
RM=rm -f

SRCS=autosort_list.cpp main.cpp test_autosort_list.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: main test

main: autosort_list.o
	$(CXX) main.cpp -o main autosort_list.o

autosort_list.o: autosort_list.h node.h
	$(CXX) -c autosort_list.cpp



test: test_autosort_list.o autosort_list.o
	$(CXX) test_autosort_list.cpp -o test autosort_list.o

test_autosort_list.o: autosort_list.o autosort_list.h node.h
	$(CXX) -c test_autosort_list.cpp autosort_list.o

clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) main testing