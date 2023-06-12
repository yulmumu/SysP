#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	    const char* command = "cat";

	        FILE* fp;
		    char path[1024];

		        /* PATH 환경 변수에서 실행 가능한 경로 탐색 */
		        fp = popen("which cat", "r");
			    if (fp == NULL) {
				            perror("popen");
					            return 1;
						        }

			        if (fgets(path, sizeof(path), fp) != NULL) {
					        /* 개행 문자 제거 */
					        size_t len = strlen(path);
						        if (len > 0 && path[len-1] == '\n') {
								            path[len-1] = '\0';
									            }

							        printf("Executable Path: %s\n", path);
								    } else {
									            printf("Command not found\n");
										        }

				    pclose(fp);

				        return 0;
}

