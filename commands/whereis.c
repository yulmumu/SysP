#include <stdio.h>
#include <stdlib.h>

int main() {
	    const char* command = "whereis ls";  

	        FILE* pipe = popen(command, "r");
		    if (pipe == NULL) {
			            perror("popen");
				            return 1;
					        }

		        char buffer[128];
			    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
				            printf("%s", buffer);
					        }

			        pclose(pipe);

				    return 0;
}

