#include <stdio.h>
#include <stdlib.h>

int main() {
	    const char* source_file = "source_file.txt";
	        const char* destination_file = "destination_file.txt";
		    
		    FILE* source = fopen(source_file, "rb");
		        if (source == NULL) {
				        perror("fopen");
					        return 1;
						    }
			    
			    FILE* destination = fopen(destination_file, "wb");
			        if (destination == NULL) {
					        perror("fopen");
						        fclose(source);
							        return 1;
								    }
				    
				    int ch;
				        while ((ch = fgetc(source)) != EOF) {
						        fputc(ch, destination);
							    }
					    
					    fclose(source);
					        fclose(destination);
						    
						    return 0;
}

