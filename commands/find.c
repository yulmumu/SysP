#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

void search_files(const char* directory, const char* extension) {
	    DIR* dir;
	        struct dirent* entry;

		    dir = opendir(directory);
		        if (dir == NULL) {
				        perror("opendir");
					        return;
						    }

			    while ((entry = readdir(dir)) != NULL) {
				            if (entry->d_type == DT_REG) {  
						                const char* filename = entry->d_name;
								            const char* file_extension = strrchr(filename, '.');

									                if (file_extension != NULL && strcmp(file_extension, extension) == 0) {
												                printf("%s/%s\n", directory, filename);
														            }
											        }

					            if (entry->d_type == DT_DIR && strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) {
							                char path[1024];
									            snprintf(path, sizeof(path), "%s/%s", directory, entry->d_name);
										                search_files(path, extension);
												        }
						        }

			        closedir(dir);
}

int main() {
	    const char* directory = "."; 
	        const char* extension = ".txt";

		    search_files(directory, extension);

		        return 0;
}

