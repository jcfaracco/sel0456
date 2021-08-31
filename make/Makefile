DEFFLAGS = $(patsubst %, -D%, OPTION1 OPTION2 OPTION3)
CFLAGS = -O2 -g -DOPTION2
LDFLAGS = -lm
GCC = gcc

ALL = main

all: $(ALL)

main: main.o sqr.o mult_acc.o
	$(GCC) -o $@ $(LDFLAGS) $^

%.s: %.c
	$(GCC) -S $<

clean:
	rm -f *.o *.s $(ALL)

distclean:
	rm -r $(ALL)