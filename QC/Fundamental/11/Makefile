# GNUmakefile for hoge.c

PROGRAM = app
CC := gcc
CFLAGS := -Wall -O2 -o
RUN :=./$(PROGRAM)

app: hoge.c
	$(CC) $(CFLAGS) $@ $<
#	gcc -Wall -O2 -o app($@ターゲット名) hoge.c($<依存ファイルの先頭)

run:
	$(RUN)
#	./$(PROGRAM)

clean:
	$(RM) $(PROGRAM)

