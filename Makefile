CC=gcc

test:test.o rbtree.o
	$(CC) -o $@ $^
..c.o:
	$(CC) -c $<

clean:
	rm -rf *.o test
