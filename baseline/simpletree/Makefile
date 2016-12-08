CC = gcc

CCFLAGS =-w -O2 -c -I./$(SOURCEDIR)
LDFLAGS =-O2 -static -lm 

SOURCEDIR    = src
BUILDDIR     = build

SOURCE    = tree
HEAD      = tree

HEADER = $(join $(addsuffix $(SOURCEDIR)/, $(dir $(HEAD))), $(notdir $(HEAD:=.h)))
OBJECT = $(join $(addsuffix $(BUILDDIR)/, $(dir $(SOURCE))), $(notdir $(SOURCE:=.o)))

EXECUTABLE = run

all: exec

arm: CC = arm-linux-gnueabi-gcc
arm: exec

exec: directory $(OBJECT) 
	$(CC) $(OBJECT) $(LDFLAGS) -o $(EXECUTABLE) 

directory:
	mkdir -p $(BUILDDIR) 

$(BUILDDIR)/%.o: $(SOURCEDIR)/%.c $(HEADER)
	$(CC) $(CCFLAGS) $< -o $@

clean:
	rm -rf $(EXECUTABLE) $(BUILDDIR) *.json *.dot *.png *.out *.txt *.log
