all: run

run: srecordtest
	./srecordtest

srecordtest:
	gcc -o srecordtest srecord.c srecordtest.c

clean:
	rm -f srecordtest
