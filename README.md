# Batch Simulation Program

CMPS 431 Operating Systems

1.	Using a UNIX/LINUX/UNIX Emulator, create a console program that can compile and execute programs either by the user entering the name of the program, or automatically executing all of the programs in a directory.  The program will essentially simulate the system monitor of a Batch system. <br/>
      [a.]	&nbsp; The programs to be run will be small c/c++ programs.  Each time a program does some i/0, do a small delay (during development, the smaller the better).<br/>
      ``` i.Program that prints 50 dots ``` <br/>
      ```ii.	Program that does a summation of numbers from 1 to 10 ```<br/>
          1.  print sum along the way.<br/>
      ```iii.	Program that does a factorial of 10```<br/>
          1.	print factorial along the way<br/>
      ```iv.	Program that prints 100 ‘#’s```<br/>
      ```v.	Etc. ```<br/>
      [b.]	The programs will reside in a directory called /jobs.<br/>
      [c.]	The BatchMonitor program will live in a different directory than the jobs directory.  See below.<br/>
      ```i.	C:\users\batch```<br/>
      ```ii.	C:\users\batch\jobs```<br/>
      [d.]	The Batch Monitor program will give the user the following options<br/>
      ```i.	List jobs```<br/>
      ```ii.	Set jobs directory```<br/>
      ```iii.	Compile and run a specific program```<br/>
      ```iv.	Compile and run all jobs in a specific directory.```<br/>
      ```v.	Shutdown```<br/>
      ```vi.	List program options```<br/>
      ```vii.	help```<br/>
