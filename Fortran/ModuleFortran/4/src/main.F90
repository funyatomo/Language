program main
  use mod1
  use mod2
  implicit none

  call subprog1

#ifdef hoge
  call subprog2
#endif

endprogram main
