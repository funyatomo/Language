# Makefile for mod1.f90 mod2.f90 main.f90
# http://www.wagavulin.jp/entry/20130601/1370114999

PROGRAM := app
OBJS := src/mod1.o src/mod2.o src/main.o
OBJS2 := src/mod1.o src/mod2.o src/main2.o
FC := gfortran
.SUFFIXES:
.SUFFIXES: .F90 .o
# ".mod"がソースファイルとして認識されてしまう
# 一行目でクリアし、.f90 .oを再定義する
FFLAGS := -O2 -o
RUN := ./$(PROGRAM)


$(PROGRAM): $(OBJS)
	$(FC) $(FFLAGS) $@ $^
# $^は依存ファイルのリスト
# $@はターゲットファイルの名前
# $<は依存ファイルのリストの先頭のファイル

# 条件付きコンパイルのレシピ
aha: $(OBJS2)
	$(FC) $(FFLAGS) $@ $^

# main2.oの依存関係
src/main2.o: src/main2.F90 src/main.F90

src/main2.F90: src/main.F90
	cpp -P -Dhoge $< $@

.F90.o:
	$(FC) -c $< $(DEBUG) $(FFLAGS) $@
.f90.o:
	$(FC) -c $< $(FFLAGS) $@
# サフィックスルール
# 暗黙のルール

run:
	$(RUN)

clean:
	$(RM) $(OBJS) *.mod $(PROGRAM) aha
