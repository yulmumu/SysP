#include <stdio.h>
#include <stdlib.h>

int main() {
	    const char* file_name = "read_file.txt";
	        
	        FILE* file = fopen(file_name, "r");
		    if (file == NULL) {
			            perror("fopen");
				            return 1;
					        }
		        
		        char buffer[1024];
			    while (fgets(buffer, sizeof(buffer), file) != NULL) {
				            printf("%s", buffer);
					        }
			        
			        fclose(file);
				    
				    return 0;
}

