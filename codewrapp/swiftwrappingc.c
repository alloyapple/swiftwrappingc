#include "swiftwrappingc.h"
/*open function */

int open_with_flag(const char *path, int oflag) {
  return open(path, oflag);
}

int open_with_mode(const char *path, int oflag, mode_t mode) {
  return open(path, oflag, mode);
}

/*fcntl function*/
int fcntl_with_cmd(int fildes, int cmd) {
  return fcntl(fildes, cmd);
}

int fcntl_with_flock(int fildes, int cmd, struct flock* flock) {
  return fcntl(fildes, cmd, flock);
}

int fcntl_with_long(int fildes, int cmd, long arg) {
  return fcntl(fildes, cmd, arg);
}

/*ioctl function*/
int ioctl_with_request(int fd, unsigned long request) {
  return ioctl(fd, request);
}

int ioctl_with_data(int fd, unsigned long request, void* data) {
  return ioctl(fd, request, data);
}
