/*
 * 
 * includes.h
 * 
 * Author: Tatu Ylonen <ylo@cs.hut.fi>
 * 
 * Copyright (c) 1995 Tatu Ylonen <ylo@cs.hut.fi>, Espoo, Finland
 *                    All rights reserved
 * 
 * Created: Thu Mar 23 16:29:37 1995 ylo
 * 
 * This file includes most of the needed system headers.
 * 
 */

#ifndef INCLUDES_H
#define INCLUDES_H

#define RCSID(msg) \
static /**/const char *const rcsid[] = { (char *)rcsid, "\100(#)" msg }

#include "config.h"

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/param.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/un.h>
#include <sys/resource.h>

#include <netinet/in.h>
#include <netinet/in_systm.h>
#include <netinet/tcp.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <netdb.h>

#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <termios.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>
#include <time.h>
#include <dirent.h>

#ifdef HAVE_BSTRING_H
# include <bstring.h>
#endif 
#ifdef HAVE_NETGROUP_H
# include <netgroup.h>
#endif 
#ifdef HAVE_NETDB_H
# include <netdb.h>
#endif 
#ifdef HAVE_PATHS_H
# include <paths.h>
#endif 
#ifdef HAVE_ENDIAN_H
# include <endian.h>
#endif
#ifdef HAVE_SYS_SELECT_H
# include <sys/select.h>
#endif
#ifdef HAVE_SYS_TIME_H
# include <sys/time.h>
#endif
#ifdef HAVE_SYS_BSDTTY_H
# include <sys/bsdtty.h>
#endif
#ifdef USE_PAM
# include <security/pam_appl.h>
#endif

#include "version.h"
#include "helper.h"
#include "bsd-strlcpy.h"
#include "bsd-strlcat.h"
#include "bsd-mktemp.h"
#include "bsd-snprintf.h"
#include "bsd-daemon.h"
#include "bsd-login.h"

/* Define this to be the path of the xauth program. */
#ifndef XAUTH_PATH
#define XAUTH_PATH "/usr/X11R6/bin/xauth"
#endif /* XAUTH_PATH */

/* Define this to be the path of the rsh program. */
#ifndef _PATH_RSH
#define _PATH_RSH "/usr/bin/rsh"
#endif /* _PATH_RSH */

/*
 * Define this to use pipes instead of socketpairs for communicating with the
 * client program.  Socketpairs do not seem to work on all systems.
 */
#define USE_PIPES 1

#endif				/* INCLUDES_H */
