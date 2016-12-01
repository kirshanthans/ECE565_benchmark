CC = gcc

CCFLAGS =-w -O3 -c -I./$(SOURCEDIR) -DTORONTO
LDFLAGS =-O3 -static -lm 

SOURCEDIR    = src
BUILDDIR     = build

SOURCE    = args newbh util walksub
HEAD      = code defs stdinc vectmath

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
