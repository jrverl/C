.SILENT:
# -*- Declaraciones -*-
#Compilacion
CC = gcc
SRCCC = hello_structs_1.c 
OBJCC = hello_structs_1.o 

#Enlazado
LINKER = gcc
SRCL = hello_structs_1.o
BINL = hello_structs_1.exe

#utilidades
RM = rm -rf

# -*- Ejecucion -*-
.PHONY: all all-before all-after clean run

all: all-before $(OBJCC) $(BINL) clean all-after

Clean:
	$(RM) $(OBJCC) $(BINL)

$(OBJCC): $(GLOBALDEPS)
	$(CC) -c $(SRCCC) -o $(OBJCC)

$(BINL): $(OBJCC)
	$(LINKER) $(SRCL) -o $(BINL)

run: $(BINL)
	./$(BINL)