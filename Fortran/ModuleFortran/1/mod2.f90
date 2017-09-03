module mod2
  use mod1
  implicit none
contains

subroutine subprog

  real(8)::x1,x2,x3

  x1 = 1.0d0
  x2 = 2.0d0
  x3 = 3.0d0

  x1 = x1 + x2 + x3

  i = int(x1 * pi) + 1

endsubroutine subprog

endmodule mod2

