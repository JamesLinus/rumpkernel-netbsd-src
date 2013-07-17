/*	$NetBSD: rumpvnode_if.h,v 1.13 2013/07/17 21:21:34 pooka Exp $	*/

/*
 * Warning: DO NOT EDIT! This file is automatically generated!
 * (Modifications made here may easily be lost!)
 *
 * Created from the file:
 *	NetBSD: vnode_if.src,v 1.63 2011/10/14 09:23:31 hannken Exp
 * by the script:
 *	NetBSD: vnode_if.sh,v 1.59 2013/07/17 21:20:53 pooka Exp
 */

/*
 * Copyright (c) 1992, 1993, 1994, 1995
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _RUMP_RUMPVNODE_IF_H_
#define _RUMP_RUMPVNODE_IF_H_

struct buf;
struct flock;
struct knote;
struct vm_page;

#ifndef _KERNEL
#include <stdbool.h>
#endif

int RUMP_VOP_BWRITE(struct vnode *, struct buf *);
int RUMP_VOP_LOOKUP(struct vnode *, struct vnode **, struct componentname *);
int RUMP_VOP_CREATE(struct vnode *, struct vnode **, struct componentname *, 
    struct vattr *);
int RUMP_VOP_MKNOD(struct vnode *, struct vnode **, struct componentname *, 
    struct vattr *);
int RUMP_VOP_OPEN(struct vnode *, int, struct kauth_cred *);
int RUMP_VOP_CLOSE(struct vnode *, int, struct kauth_cred *);
int RUMP_VOP_ACCESS(struct vnode *, int, struct kauth_cred *);
int RUMP_VOP_GETATTR(struct vnode *, struct vattr *, struct kauth_cred *);
int RUMP_VOP_SETATTR(struct vnode *, struct vattr *, struct kauth_cred *);
int RUMP_VOP_READ(struct vnode *, struct uio *, int, struct kauth_cred *);
int RUMP_VOP_WRITE(struct vnode *, struct uio *, int, struct kauth_cred *);
int RUMP_VOP_IOCTL(struct vnode *, u_long, void *, int, struct kauth_cred *);
int RUMP_VOP_FCNTL(struct vnode *, u_int, void *, int, struct kauth_cred *);
int RUMP_VOP_POLL(struct vnode *, int);
int RUMP_VOP_KQFILTER(struct vnode *, struct knote *);
int RUMP_VOP_REVOKE(struct vnode *, int);
int RUMP_VOP_MMAP(struct vnode *, int, struct kauth_cred *);
int RUMP_VOP_FSYNC(struct vnode *, struct kauth_cred *, int, off_t, off_t);
int RUMP_VOP_SEEK(struct vnode *, off_t, off_t, struct kauth_cred *);
int RUMP_VOP_REMOVE(struct vnode *, struct vnode *, struct componentname *);
int RUMP_VOP_LINK(struct vnode *, struct vnode *, struct componentname *);
int RUMP_VOP_RENAME(struct vnode *, struct vnode *, struct componentname *, 
    struct vnode *, struct vnode *, struct componentname *);
int RUMP_VOP_MKDIR(struct vnode *, struct vnode **, struct componentname *, 
    struct vattr *);
int RUMP_VOP_RMDIR(struct vnode *, struct vnode *, struct componentname *);
int RUMP_VOP_SYMLINK(struct vnode *, struct vnode **, 
    struct componentname *, struct vattr *, char *);
int RUMP_VOP_READDIR(struct vnode *, struct uio *, struct kauth_cred *, 
    int *, off_t **, int *);
int RUMP_VOP_READLINK(struct vnode *, struct uio *, struct kauth_cred *);
int RUMP_VOP_ABORTOP(struct vnode *, struct componentname *);
int RUMP_VOP_INACTIVE(struct vnode *, bool *);
int RUMP_VOP_RECLAIM(struct vnode *);
int RUMP_VOP_LOCK(struct vnode *, int);
int RUMP_VOP_UNLOCK(struct vnode *);
int RUMP_VOP_BMAP(struct vnode *, int64_t, struct vnode **, int64_t *, int *);
int RUMP_VOP_STRATEGY(struct vnode *, struct buf *);
int RUMP_VOP_PRINT(struct vnode *);
int RUMP_VOP_ISLOCKED(struct vnode *);
int RUMP_VOP_PATHCONF(struct vnode *, int, register_t *);
int RUMP_VOP_ADVLOCK(struct vnode *, void *, int, struct flock *, int);
int RUMP_VOP_WHITEOUT(struct vnode *, struct componentname *, int);
int RUMP_VOP_GETPAGES(struct vnode *, off_t, struct vm_page **, int *, int, 
    int, int, int);
int RUMP_VOP_PUTPAGES(struct vnode *, off_t, off_t, int);
int RUMP_VOP_CLOSEEXTATTR(struct vnode *, int, struct kauth_cred *);
int RUMP_VOP_GETEXTATTR(struct vnode *, int, const char *, struct uio *, 
    size_t *, struct kauth_cred *);
int RUMP_VOP_LISTEXTATTR(struct vnode *, int, struct uio *, size_t *, int, 
    struct kauth_cred *);
int RUMP_VOP_OPENEXTATTR(struct vnode *, struct kauth_cred *);
int RUMP_VOP_DELETEEXTATTR(struct vnode *, int, const char *, 
    struct kauth_cred *);
int RUMP_VOP_SETEXTATTR(struct vnode *, int, const char *, struct uio *, 
    struct kauth_cred *);

#endif /* !_RUMP_RUMPVNODE_IF_H_ */
