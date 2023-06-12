#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	    char cwd[1024];
	        
	        if (getcwd(cwd, sizeof(cwd)) != NULL) {
			        printf("Current working directory: %s\n", cwd);
				    } else {
					            perror("getcwd");
						            return 1;
							        }
		    
		    return 0;
}

