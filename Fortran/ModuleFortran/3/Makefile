# Makefile for mod1.f90 mod2.f90 main.f90
# http://www.wagavulin.jp/entry/20130601/1370114999
# http://www.rivhiro-weather.com/knowledge/?p=124

PROGRAM := app
OBJS := src/mod1.o src/mod2.o src/main.o
OBJS2 := src/mod1.o src/mod2.o src/main2.o
FC := gfortran
.SUFFIXES:
.SUFFIXES: .F90 .o
# ".mod"がソースファイルとして認識されてしまう
# 一行目でクリアし、.f90 .oを再定義する
FFLAGS := -O2 -o

$(PROGRAM): $(OBJS)
	$(FC) $(FFLAGS) $@ $^
# $^は依存ファイルのリスト
# $@はターゲットファイルの名前
# $<は依存ファイルのリストの先頭のファイル

# 条件付きコンパイルのレシピ
# Type "make aha"
aha: $(OBJS2)
	$(FC) $(FFLAGS) $@ $^

# main2.oの依存関係
# main2.oはmain2.F90の中間オブジェクトファイルであり、
# プリプロセッサによって、元のmain.F90から生成される。
src/main2.o: src/main2.F90 src/main.F90
# main.F90が更新された場合はもちろん、main2.F90が更新された
# 場合にも中間ファイルが再コンパイルされる。

# プリプロセッサによるレシピ
# ifdef~endif区間が有効なコードが出力される
src/main2.F90: src/main.F90
	cpp -P -Dhoge $< $@

.F90.o:
	$(FC) -c $< $(FFLAGS) $@
.f90.o:
	$(FC) -c $< $(FFLAGS) $@
# サフィックスルール
# 暗黙のルール

clean:
	$(RM) $(OBJS) *.mod $(PROGRAM) aha
