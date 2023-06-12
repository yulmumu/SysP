#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	    const char* command = "lsattr";

	        int status = system(command);
		    if (status == -1) {
			            perror("system");
				            return 1;
					        }

		        return 0;
}

