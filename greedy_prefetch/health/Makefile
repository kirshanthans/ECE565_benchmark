CC = gcc

CCFLAGS =-m32 -w -O2 -c -I./$(SOURCEDIR) -DTORONTO
LDFLAGS =-m32 -O2 -static -lm 

SOURCEDIR    = src
BUILDDIR     = build

SOURCE    = args health list poisson 
HEAD      = health

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
