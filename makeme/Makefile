HOME =/home/wasim/Documents/makeme
INC = -I$(HOME)/folder1/ -I$(HOME)/folder2 -I$(HOME)/folder3
OBJS = $(HOME)/folder1/folder1.o $(HOME)/folder2/folder2.o $(HOME)/folder3/folder3.o

TOPTARGETS := all clean

SUBDIRS := $(wildcard */.)

$(TOPTARGETS): $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)

all:main.out
	g++ -o main.out mainfile.o $(OBJS)

main.out:mainfile.cpp
	g++ $(INC) -c mainfile.cpp
clean:
	rm mainfile.o

.PHONY: $(TOPTARGETS) $(SUBDIRS)
