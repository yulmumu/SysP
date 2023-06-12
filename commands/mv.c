#include <stdio.h>
#include <stdlib.h>

int main() {
	    const char* old_name = "old_name";
	        const char* new_name = "new_name";

		    int status = rename(old_name, new_name);
		        if (status == -1) {
				        perror("rename");
					        return 1;
						    }

			    return 0;
}

