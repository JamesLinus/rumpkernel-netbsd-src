/*	$NetBSD: rumpvfs_syscalls.c,v 1.1 2014/04/27 15:13:58 pooka Exp $	*/

/* AUTOMATICALLY GENERATED BY makerumpsyscalls.sh */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: rumpvfs_syscalls.c,v 1.1 2014/04/27 15:13:58 pooka Exp $");

#include <sys/param.h>

#include "rump_private.h"

extern const sy_call_t sys_open;
extern const sy_call_t sys_link;
extern const sy_call_t sys_unlink;
extern const sy_call_t sys_chdir;
extern const sy_call_t sys_fchdir;
extern const sy_call_t sys_chmod;
extern const sy_call_t sys_chown;
extern const sy_call_t sys_unmount;
extern const sy_call_t sys_access;
extern const sy_call_t sys_chflags;
extern const sy_call_t sys_fchflags;
extern const sy_call_t sys_sync;
extern const sy_call_t sys_ktrace;
extern const sy_call_t sys_revoke;
extern const sy_call_t sys_symlink;
extern const sy_call_t sys_readlink;
extern const sy_call_t sys_umask;
extern const sy_call_t sys_chroot;
extern const sy_call_t sys_fsync;
extern const sy_call_t sys_fchown;
extern const sy_call_t sys_fchmod;
extern const sy_call_t sys_rename;
extern const sy_call_t sys_mkfifo;
extern const sy_call_t sys_mkdir;
extern const sy_call_t sys_rmdir;
extern const sy_call_t sys_pread;
extern const sy_call_t sys_pwrite;
extern const sy_call_t sys_pathconf;
extern const sy_call_t sys_lseek;
extern const sy_call_t sys_truncate;
extern const sy_call_t sys_ftruncate;
extern const sy_call_t sys_fdatasync;
extern const sy_call_t sys_lchmod;
extern const sy_call_t sys_lchown;
extern const sy_call_t sys_preadv;
extern const sy_call_t sys_pwritev;
extern const sy_call_t sys___getcwd;
extern const sy_call_t sys_fchroot;
extern const sy_call_t sys_lchflags;
extern const sy_call_t sys_fsync_range;
extern const sy_call_t sys_getvfsstat;
extern const sy_call_t sys_statvfs1;
extern const sy_call_t sys_fstatvfs1;
extern const sy_call_t sys_extattrctl;
extern const sy_call_t sys_extattr_set_file;
extern const sy_call_t sys_extattr_get_file;
extern const sy_call_t sys_extattr_delete_file;
extern const sy_call_t sys_extattr_set_fd;
extern const sy_call_t sys_extattr_get_fd;
extern const sy_call_t sys_extattr_delete_fd;
extern const sy_call_t sys_extattr_set_link;
extern const sy_call_t sys_extattr_get_link;
extern const sy_call_t sys_extattr_delete_link;
extern const sy_call_t sys_extattr_list_fd;
extern const sy_call_t sys_extattr_list_file;
extern const sy_call_t sys_extattr_list_link;
extern const sy_call_t sys_setxattr;
extern const sy_call_t sys_lsetxattr;
extern const sy_call_t sys_fsetxattr;
extern const sy_call_t sys_getxattr;
extern const sy_call_t sys_lgetxattr;
extern const sy_call_t sys_fgetxattr;
extern const sy_call_t sys_listxattr;
extern const sy_call_t sys_llistxattr;
extern const sy_call_t sys_flistxattr;
extern const sy_call_t sys_removexattr;
extern const sy_call_t sys_lremovexattr;
extern const sy_call_t sys_fremovexattr;
extern const sy_call_t sys___getdents30;
extern const sy_call_t sys___getfh30;
extern const sy_call_t sys___fhopen40;
extern const sy_call_t sys___fhstatvfs140;
extern const sy_call_t sys___mount50;
extern const sy_call_t sys___utimes50;
extern const sy_call_t sys___futimes50;
extern const sy_call_t sys___lutimes50;
extern const sy_call_t sys___stat50;
extern const sy_call_t sys___lstat50;
extern const sy_call_t sys___mknod50;
extern const sy_call_t sys___fhstat50;
extern const sy_call_t sys_linkat;
extern const sy_call_t sys_renameat;
extern const sy_call_t sys_mkfifoat;
extern const sy_call_t sys_mknodat;
extern const sy_call_t sys_mkdirat;
extern const sy_call_t sys_faccessat;
extern const sy_call_t sys_fchmodat;
extern const sy_call_t sys_fchownat;
extern const sy_call_t sys_fstatat;
extern const sy_call_t sys_utimensat;
extern const sy_call_t sys_openat;
extern const sy_call_t sys_readlinkat;
extern const sy_call_t sys_symlinkat;
extern const sy_call_t sys_unlinkat;
extern const sy_call_t sys_futimens;
extern const sy_call_t sys___quotactl;

static const struct rump_onesyscall mysys[] = {
	{ 5,	sys_open },
	{ 9,	sys_link },
	{ 10,	sys_unlink },
	{ 12,	sys_chdir },
	{ 13,	sys_fchdir },
	{ 15,	sys_chmod },
	{ 16,	sys_chown },
	{ 22,	sys_unmount },
	{ 33,	sys_access },
	{ 34,	sys_chflags },
	{ 35,	sys_fchflags },
	{ 36,	sys_sync },
	{ 45,	sys_ktrace },
	{ 56,	sys_revoke },
	{ 57,	sys_symlink },
	{ 58,	sys_readlink },
	{ 60,	sys_umask },
	{ 61,	sys_chroot },
	{ 95,	sys_fsync },
	{ 123,	sys_fchown },
	{ 124,	sys_fchmod },
	{ 128,	sys_rename },
	{ 132,	sys_mkfifo },
	{ 136,	sys_mkdir },
	{ 137,	sys_rmdir },
	{ 173,	sys_pread },
	{ 174,	sys_pwrite },
	{ 191,	sys_pathconf },
	{ 199,	sys_lseek },
	{ 200,	sys_truncate },
	{ 201,	sys_ftruncate },
	{ 241,	sys_fdatasync },
	{ 274,	sys_lchmod },
	{ 275,	sys_lchown },
	{ 289,	sys_preadv },
	{ 290,	sys_pwritev },
	{ 296,	sys___getcwd },
	{ 297,	sys_fchroot },
	{ 304,	sys_lchflags },
	{ 354,	sys_fsync_range },
	{ 356,	sys_getvfsstat },
	{ 357,	sys_statvfs1 },
	{ 358,	sys_fstatvfs1 },
	{ 360,	sys_extattrctl },
	{ 361,	sys_extattr_set_file },
	{ 362,	sys_extattr_get_file },
	{ 363,	sys_extattr_delete_file },
	{ 364,	sys_extattr_set_fd },
	{ 365,	sys_extattr_get_fd },
	{ 366,	sys_extattr_delete_fd },
	{ 367,	sys_extattr_set_link },
	{ 368,	sys_extattr_get_link },
	{ 369,	sys_extattr_delete_link },
	{ 370,	sys_extattr_list_fd },
	{ 371,	sys_extattr_list_file },
	{ 372,	sys_extattr_list_link },
	{ 375,	sys_setxattr },
	{ 376,	sys_lsetxattr },
	{ 377,	sys_fsetxattr },
	{ 378,	sys_getxattr },
	{ 379,	sys_lgetxattr },
	{ 380,	sys_fgetxattr },
	{ 381,	sys_listxattr },
	{ 382,	sys_llistxattr },
	{ 383,	sys_flistxattr },
	{ 384,	sys_removexattr },
	{ 385,	sys_lremovexattr },
	{ 386,	sys_fremovexattr },
	{ 390,	sys___getdents30 },
	{ 395,	sys___getfh30 },
	{ 396,	sys___fhopen40 },
	{ 397,	sys___fhstatvfs140 },
	{ 410,	sys___mount50 },
	{ 420,	sys___utimes50 },
	{ 423,	sys___futimes50 },
	{ 424,	sys___lutimes50 },
	{ 439,	sys___stat50 },
	{ 441,	sys___lstat50 },
	{ 450,	sys___mknod50 },
	{ 451,	sys___fhstat50 },
	{ 457,	sys_linkat },
	{ 458,	sys_renameat },
	{ 459,	sys_mkfifoat },
	{ 460,	sys_mknodat },
	{ 461,	sys_mkdirat },
	{ 462,	sys_faccessat },
	{ 463,	sys_fchmodat },
	{ 464,	sys_fchownat },
	{ 466,	sys_fstatat },
	{ 467,	sys_utimensat },
	{ 468,	sys_openat },
	{ 469,	sys_readlinkat },
	{ 470,	sys_symlinkat },
	{ 471,	sys_unlinkat },
	{ 472,	sys_futimens },
	{ 473,	sys___quotactl },
};

RUMP_COMPONENT(RUMP_COMPONENT_SYSCALL)
{

	rump_syscall_boot_establish(mysys, __arraycount(mysys));
}