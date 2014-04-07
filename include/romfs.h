#ifndef ROMFS_H
#define ROMFS_H

#define ROMFS_TYPE "romfs"
struct dirent *romfs_readdir(int);
void romfs_server();

#endif
