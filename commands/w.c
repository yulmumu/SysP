#include <stdio.h>
#include <stdlib.h>

int main() {
	    const char* command = "w";

	        int status = system(command);
		    if (status == -1) {
			            perror("system");
				            return 1;
					        }

		        return 0;
}

