CC=gcc
CFLAGS=-c -Wall -I $(INCDIR)
LDFLAGS=
INCDIR=inc
SRCDIR=src
BUILDDIR=build
OBJDIR=objects
BINDIR=bin
OBJDIR:=$(BUILDDIR)/$(OBJDIR)
BINDIR:=$(BUILDDIR)/$(BINDIR)
SOURCES=$(wildcard src/*.cpp)
OBJECTS=$(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
EXECUTABLE=
EXECUTABLE:=$(BINDIR)/$(EXECUTABLE)

.PHONY: all clean

all: $(SOURCES) $(EXECUTABLE) 

$(BUILDDIR):
	mkdir -p {$(OBJDIR),$(BINDIR)}

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

$(OBJDIR)/%.o: $(BUILDDIR) $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BUILDDIR)
