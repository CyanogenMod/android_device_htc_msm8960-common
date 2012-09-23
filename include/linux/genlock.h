/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _GENLOCK_H_
#define _GENLOCK_H_
#include <linux/bitops.h>
#ifndef _LINUX_BITOPS_H
#define BIT(nr) (1UL << (nr))
#endif
#define GENLOCK_UNLOCK 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENLOCK_WRLOCK 1
#define GENLOCK_RDLOCK 2
#define GENLOCK_NOBLOCK BIT(0)
#define GENLOCK_WRITE_TO_READ BIT(1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct genlock_lock {
 int fd;
 int op;
 int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int timeout;
};
#define GENLOCK_IOC_MAGIC 'G'
#define GENLOCK_IOC_NEW _IO(GENLOCK_IOC_MAGIC, 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENLOCK_IOC_EXPORT _IOR(GENLOCK_IOC_MAGIC, 1,   struct genlock_lock)
#define GENLOCK_IOC_ATTACH _IOW(GENLOCK_IOC_MAGIC, 2,   struct genlock_lock)
#define GENLOCK_IOC_LOCK _IOW(GENLOCK_IOC_MAGIC, 3,   struct genlock_lock)
#define GENLOCK_IOC_RELEASE _IO(GENLOCK_IOC_MAGIC, 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENLOCK_IOC_WAIT _IOW(GENLOCK_IOC_MAGIC, 5,   struct genlock_lock)
#define GENLOCK_IOC_DREADLOCK _IOW(GENLOCK_IOC_MAGIC, 6,   struct genlock_lock)
#endif

