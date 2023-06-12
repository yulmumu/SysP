#include <stdio.h>
#include <stdlib.h>

int main() {
	    const char* file_name = "new_file.txt";

	        FILE* file = fopen(file_name, "w");
		    if (file == NULL) {
			            perror("fopen");
				            return 1;
					        }

		        fclose(file);

			    return 0;
}

