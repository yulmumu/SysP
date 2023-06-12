#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	    const char* command = "groups";

	        int status = system(command);
		    if (status == -1) {
			            perror("system");
				            return 1;
					        }

		        return 0;
}

