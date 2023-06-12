#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

int main() {
	    struct utsname sys_info;

	        if (uname(&sys_info) == -1) {
			        perror("uname");
				        return 1;
					    }

		    printf("Operating System: %s\n", sys_info.sysname);
		        printf("Node Name: %s\n", sys_info.nodename);
			    printf("Release Version: %s\n", sys_info.release);
			        printf("Hardware Type: %s\n", sys_info.machine);

				    return 0;
}

