CC = gcc

CCFLAGS =-w -c -O3 -I./$(SOURCEDIR) -DTORONTO
LDFLAGS =-static -lm -O3

SOURCEDIR    = src
BUILDDIR     = build

SOURCE    = args health list poisson 
HEAD      = health

HEADER = $(join $(addsuffix $(SOURCEDIR)/, $(dir $(HEAD))), $(notdir $(HEAD:=.h)))
OBJECT = $(join $(addsuffix $(BUILDDIR)/, $(dir $(SOURCE))), $(notdir $(SOURCE:=.o)))

EXECUTABLE = run

all: exec

exec: directory $(OBJECT) 
	$(CC) $(OBJECT) $(LDFLAGS) -o $(EXECUTABLE) 

directory:
	mkdir -p $(BUILDDIR) 

$(BUILDDIR)/%.o: $(SOURCEDIR)/%.c $(HEADER)
	$(CC) $(CCFLAGS) $< -o $@

clean:
	rm -rf $(EXECUTABLE) $(BUILDDIR) *.json *.dot *.png *.out *.txt *.log
