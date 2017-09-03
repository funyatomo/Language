# Makefile for mod1.f90 mod2.f90 main.f90

OBJS = mod1.o mod2.o main.o
PROGRAM = app
FC := gfortran
.SUFFIXES:
.SUFFIXES: .f90 .o
# ".mod"がソースファイルとして認識されてしまう
# 一行目でクリアし、.f90 .oを再定義する
FFLAGS := -O2 -o
RUN := ./$(PROGRAM)


$(PROGRAM): $(OBJS)
	$(FC) $(FFLAGS) $@ $^
# $^は依存ファイルのリスト
# $@はターゲットファイルの名前
# $<は依存ファイルのリストの先頭のファイル

.f90.o:
	$(FC) -c $< $(FFLAGS) $@
# サフィックスルール
# 暗黙のルール

run:
	$(RUN)

clean:
	$(RM) *.o *.mod $(PROGRAM)

#oclean:
#	$(RM) *.o
#
#modclean:
#	$(RM) *.mod
