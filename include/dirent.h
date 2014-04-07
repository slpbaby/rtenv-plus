#ifndef DIRENT_H
#define DIRENT_H

struct dirent {
	unsigned short	d_reclen;
	unsigned char	d_type;
	char		d_name[10];
};

#define MAX_DIR 10

#endif
