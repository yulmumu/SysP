#include <stdio.h>
#include <stdlib.h>

int main() {
	    int result = system("nl file1.txt");

	        if (result == -1) {
			        perror("system");
				        return 1;
					    }

		    printf("nl 명령어 실행이 완료되었습니다.\n");
		        return 0;
}

