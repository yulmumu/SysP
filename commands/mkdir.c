#include <stdio.h>
#include <sys/stat.h>

int main() {
	    const char* dir_name = "my_directory";
	        
	        if (mkdir(dir_name, 0777) == 0) {
			        printf("Directory created successfully.\n");
				    } else {
					            perror("mkdir");
						            return 1;
							        }
		    
		    return 0;
}

