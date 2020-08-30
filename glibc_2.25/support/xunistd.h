/* POSIX-specific extra functions.
   Copyright (C) 2016-2017 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* These wrapper functions use POSIX types and therefore cannot be
   declared in <support/support.h>.  */

#ifndef SUPPORT_XUNISTD_H
#define SUPPORT_XUNISTD_H

#include <unistd.h>
#include <sys/cdefs.h>

__BEGIN_DECLS

pid_t xfork (void);
pid_t xwaitpid (pid_t, int *status, int flags);

/* Write the buffer.  Retry on short writes.  */
void xwrite (int, const void *, size_t);

/* Invoke mmap with a zero file offset.  */
void *xmmap (void *addr, size_t length, int prot, int flags, int fd);

void xmunmap (void *addr, size_t length);

__END_DECLS

#endif /* SUPPORT_XUNISTD_H */
