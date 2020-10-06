#include <unistd.h>
#include "get_next_line.h"

int main ()
{
	int fd;
	char *line;

	fd = open("../test", O_RDONLY);
	while ( get_next_line(fd, &line) > 0 )
	{
		printf("%s\n", line);
		free(line);
	}
}

