D'Artagnan Wake
Email: dawa6951@colorado.edu


Simple_add.c

Location: arch/x86/kernel/simple_add.c
This file contains the system call implementation of simple_add

Makefile

Location: arch/x86/kernel/Makefile
This file contains all the specifications to the compiler so when you compile you only have to type make.

syscall_64.tbl

Location: arch/x86/entry/syscalls/syscall_64.tbl
This file contains the trap table for all the system calls and their IDs.

syscalls.h

Location: include/linux/syscalls.h
This file contains all the function prototypes for system calls.

/var/log/syslog

Location: /var/log/syslog
This contains a log of all the kernel activity and all printk to the kernel.

testHello.c

Test program for helloworld system call. 
To run: Compile it using "gcc testHello.c" Then run the executable that it creates.

testAdd.c

Test program for simple_add system call.
To run: Compile it using "gcc testAdd.c" Then run the executable that it creates.









