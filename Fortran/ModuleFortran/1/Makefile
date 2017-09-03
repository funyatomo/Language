# Makefile for mod1.f90 mod2.f90 main.f90

OBJS = mod1.o mod2.o main.o
PROGRAM = app
FC := gfortran
.SUFFIXES:
.SUFFIXES: .f90 .o
FFLAGS := -O2 -o
RUN := ./$(PROGRAM)


$(PROGRAM): $(OBJS)
	$(FC) $(FFLAGS) $@ $^
# $^は依存ファイルのリスト
# $@はターゲットファイルの名前
# $<は依存ファイルのリストの先頭のファイル

mod1.o: mod1.f90
	$(FC) -c $< $(FFLAGS) $@

mod2.o: mod2.f90
	$(FC) -c $< $(FFLAGS) $@

main.o: main.f90
	$(FC) -c $< $(FFLAGS) $@


run:
	$(RUN)

clean:
	$(RM) *.o *.mod $(PROGRAM)

#oclean:
#	$(RM) *.o
#
#modclean:
#	$(RM) *.mod
