program bar
  implicit none

  integer i,j,k
  integer,parameter::fi=10,fo=11

  write(*,fmt='(a)',advance='no') "hello"
  write(*,fmt='(a)') "hello"
  write(*,'(a)',advance='no') "hello"
  write(*,fmt='(a)') "hello"


  do i=1,10
    write(*,'(a)',advance='no') "#"
    call sleep(1)
  enddo
  write(*,fmt='(a)')

endprogram bar
