#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
	    pid_t pid = fork();

	        if (pid == -1) {
			        perror("fork");
				        return 1;
					    } else if (pid == 0) {
						            execlp("wc", "wc", "file1.txt", NULL);

							            perror("execlp");
								            return 1;
									        } else {
											        wait(NULL);
												        printf("wc 명령어 실행이 완료되었습니다.\n");
													    }

		    return 0;
}

