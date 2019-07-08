CC=gcc
CFLAGS=-g0 -O3 -Wall

BINS=app

all: $(BINS)

app: app.c selection_sort.o
	$(CC) $(CFLAGS) -o $@ $^
%.so: %.c
	$(CC) $(CFLAGS) -shared -fPIC -o $@ $^ -ldl

%.o: %.c 
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(BINS) *.o
