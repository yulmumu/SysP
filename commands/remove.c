#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	    char* file_name = "file_to_delete.txt";
	        char* command = malloc(4 + strlen(file_name) + 1);  
		    sprintf(command, "rm %s", file_name);
		        
		        int status = system(command);
			    if (status == -1) {
				            perror("system");
					            return 1;
						        }
			        
			        free(command);
				    
				    return 0;
}
