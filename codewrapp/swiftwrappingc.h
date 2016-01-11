#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

/*open function */

int open_with_flag(const char *path, int oflag);
int open_with_mode(const char *path, int oflag, mode_t mode);

/*fcntl function*/
int fcntl_with_cmd(int fildes, int cmd);
int fcntl_with_flock(int fildes, int cmd, struct flock* flock);
int fcntl_with_long(int fildes, int cmd, long arg);

/*ioctl function*/
int ioctl_with_request(int fd, unsigned long request);
int ioctl_with_data(int fd, unsigned long request, void* data);
