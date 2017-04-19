BUILD  := build
STATIC := static

SOURCES := part1.c part2.c part3.c part4.c part5.c

SOBJS := $(STATIC)/part1_harness.o \
		 $(STATIC)/part2_harness.o \
		 $(STATIC)/part3_harness.o \
		 $(STATIC)/part4_harness.o \
		 $(STATIC)/part5_harness.o 

CC     := gcc
CFLAGS := -std=c99

OBJS :=	$(BUILD)/part1 \
	    $(BUILD)/part2 \
	    $(BUILD)/part3 \
	    $(BUILD)/part4 \
	    $(BUILD)/part5

#if SOL >= 999
CFLAGS += -DSOL=999
#endif

all: $(OBJS)
	@:

real_all: $(OBJS)

$(BUILD)/part%: part%.c $(SOBJS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -g -c part$*.c -o $(BUILD)/part$*.o
	$(CC) $(CFLAGS) $(STATIC)/part$*_harness.o $(BUILD)/part$*.o -lm -o $(BUILD)/part$*

clean-logs: always
	rm -f *.out

clean: always clean-logs
	rm -rf $(BUILD)
	rm -rf $(STATIC)

test:
	@echo $(MAKE) clean
	@$(MAKE) -s --no-print-directory clean
	@./test-lab

.PHONY: all always

#if SOL >= 999
$(STATIC)/part%_harness.o: part%_harness.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c part$*_harness.c -o $(STATIC)/part$*_harness.o

static: $(SOBJS)

clean-static: always
	rm -rf $(STATIC)

export-lab: always $(SOBJS)
	./mklab.pl 1 0 lab2 *.c *.h testlib.py test-lab Makefile
	cp README.md lab2/
	mkdir -p lab2/static
	mkdir -p lab2/objects
	mkdir -p lab2/bin
	cp $(STATIC)/*.o lab2/static/
	cp objects/*.o lab2/objects/
	cp bin/lab2 lab2/bin/lab2
	rm lab2/main.c
	echo 'build' > lab2/.gitignore
	echo '*.out' >> lab2/.gitignore
	echo '*.pyc' >> lab2/.gitignore

export-sol: always $(SOBJS)
	./mklab.pl 1 999 lab2-sol *.c *.h testlib.py test-lab Makefile
	cp README.md lab2-sol/
	mkdir -p lab2-sol/static
	mkdir -p lab2-sol/objects
	mkdir -p lab2-sol/bin
	cp $(STATIC)/*.o lab2-sol/static/
	cp objects/*.o lab2-sol/objects/
	cp bin/lab2 lab2-sol/bin/lab2
	echo 'build' > lab2-sol/.gitignore
	echo '*.out' >> lab2-sol/.gitignore
	echo '*.pyc' >> lab2-sol/.gitignore

clean-export: always
	rm -rf $(EXPORT)

clean-all: always 
	rm -f *.out
	rm -f *.pyc
	rm -rf ./lab2
	rm -rf ./lab2-sol
	rm -rf $(BUILD)
	rm -rf $(STATIC)
#endif
