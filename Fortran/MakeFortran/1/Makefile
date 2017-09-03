PROGRAM = app
FC := gfortran
.SUFFIXES: .f90
FFLAGS := -O2 -o
RUN := ./$(PROGRAM)


$(PROGRAM): hoge.f90
	${FC} $< $(FFLAGS) $@


run:
	$(RUN)

clean:
	$(RM) $(PROGRAM)
