//
// Created by Ocean on 17/04/2019.
//

void main(){
	int fd;
	char *v[2];
	fd=open("/etc/zzz", O_RDWR | O_APPEND);

	printf("fd is %d\n", fd);
	setuid(getuid()); /// downgrade to normal user
	v[0]="/bin/bash";v[1]=0;
	execve(v[0],v,0);
}