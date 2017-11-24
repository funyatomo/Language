# Makefile for mod1.f90 mod2.f90 main.f90
# http://www.wagavulin.jp/entry/20130601/1370114999
# https://qiita.com/chirimen/items/af8479d8c0c7cf545b1e

PROGRAM := app
SRCS := src/mod1.F90 src/mod2.F90 src/main.F90
OBJS := $(SRCS:%.F90=%.o)

# Default rule start
FC := gfortran
.SUFFIXES:
.SUFFIXES: .f90 .F90 .o
# ".mod"がソースファイルとして認識されてしまう
# 一行目でクリアし、.f90 .oを再定義する
%.o: %.f90
	$(COMPILE.f) $(OUTPUT_OPTION) $<
%.mod: %.f90 %.o
	:
# Default rule end

FFLAGS := -O2 -o
RUN := ./$(PROGRAM)

$(PROGRAM): $(OBJS)
	$(FC) $(FFLAGS) $@ $^
# $^は依存ファイルのリスト
# $@はターゲットファイルの名前
# $<は依存ファイルのリストの先頭のファイル

.F90.o:
	$(FC) -c $< $(FFLAGS) $@
#.f90.o:
#	$(FC) -c $< $(FFLAGS) $@
# サフィックスルール
# 暗黙のルール

run:
	$(RUN)

clean:
	$(RM) $(OBJS) *.mod $(PROGRAM)
