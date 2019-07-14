CC=gcc
CFLAGS=-g0 -O3 -Wall

BINS=app libselectionsort.so runtime_libapp

all: $(BINS)

app: app.c selection_sort.o
	$(CC) $(CFLAGS) -o $@ $^

libselectionsort.so: selection_sort.c selection_sort.h
	$(CC) $(CFLAGS) -shared -fPIC -o $@ selection_sort.c

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

runtime_libapp: app.c
	$(CC) $(CFLAGS) -o $@ $^  -L. -lselectionsort

clean:
	rm -f $(BINS) *.o
