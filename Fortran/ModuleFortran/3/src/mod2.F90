module mod2
  use mod1
  implicit none
contains

subroutine subprog1

  do i=1,1
    print*,pi
  enddo
  print*, "subprog1"

endsubroutine subprog1

subroutine subprog2

  do i=1,2
    print*,pi
  enddo
  print*,"subprog2"

endsubroutine subprog2

endmodule mod2

