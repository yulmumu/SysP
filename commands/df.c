#include <stdio.h>
#include <stdlib.h>

int main() {
	    int result = system("df -h");

	        if (result == -1) {
			        perror("system");
				        return 1;
					    }

		    printf("df -h 명령어 실행이 완료되었습니다.\n");
		        return 0;
}

