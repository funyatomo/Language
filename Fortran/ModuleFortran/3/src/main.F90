program main
  use mod1
  use mod2
  implicit none

#ifndef hoge
  call subprog1
#else
  call subprog2
#endif

endprogram main
