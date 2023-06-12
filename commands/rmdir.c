#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	    char* dir_name = "my_directory";
	        char* command = malloc(6 + strlen(dir_name) + 1);
		    sprintf(command, "rmdir %s", dir_name);
		        
		        int status = system(command);
			    if (status == -1) {
				            perror("system");
					            return 1;
						        }
			        
			        free(command);
				    
				    return 0;
}

