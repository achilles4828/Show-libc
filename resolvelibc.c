#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <unistd.h>


// Includes : LIBC
int main()
	{
		puts("Where is LIBC? Here is LIBC\n");
		puts("Libc loaded layout:");
		char exec[200];
		int pid = getpid(); //load for execve
		sprintf(exec, "cat /proc/%d/maps",pid);
		system(exec);
		// Step 1 complete
		puts("Function addresses:\n");
		printf("system@libc 0x%lx\n", dlsym(RTLD_NEXT, "system"));
		printf("read@libc 0x%lx\n", dlsym(RTLD_NEXT, "read"));
		printf("write@libc 0x%lx\n", dlsym(RTLD_NEXT, "write"));
		printf("exit@libc 0x%lx\n", dlsym(RTLD_NEXT, "exit"));
		printf("PID: %d\n", pid );
		puts("--end--");
		read(0, exec,1);
		// Step 2 complete
	}
	