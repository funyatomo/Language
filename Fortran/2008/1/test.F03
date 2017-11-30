program test
  implicit none

  character(32)::hoge

  call get_command_argument(1,hoge)

  print*,hoge

endprogram
