**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
*New*
    - when a program is being picked up by the OS into the main memory which creates a new process.

*Ready*
    - a process is created. Placed into the main memory.

*Running* 
    - When a processes is chosen from he ready state.

*Block/Wait*
    - When a process waits for a certain resource to be assigned.

*Completion/Termination*
    - When a process finishes its execution.

*Suspend ready*
    - A process that is in ready state and moved to secondary memory from the main memory. 

*Suspend wait*
    - When a blocked process is removed and placed in secondary memory. 



**2. What is a zombie process?**
A zombie process is a child process that terminates, but has not been waited for by the parent.


**3. How does a zombie process get created? How does one get destroyed?**
When being created it uses the fork() system call. Address state of the parent process is replicated.

When being destroyed, wait() system call is called and the parent is executed and suspended until th child is terminated. 


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

*Compiled*
- takes an entire program as its input.
- executes faster
- requires more memory to create object code
- compiles only once not every single time
- displays errors on the entire program is checked. 

*Non - Compiled*
- takes a single line of code as input
- does not generate any intm. object code
- executes slower
- less memory
- has to convert high-level languages to low-level programs at execution. 
- displays errors when each instruction is run. 

