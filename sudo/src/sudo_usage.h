/*
 * SPDX-License-Identifier: ISC
 *
 * Copyright (c) 2007-2010, 2013, 2015, 2017, 2020-2022
 *	Todd C. Miller <Todd.Miller@sudo.ws>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef SUDO_USAGE_H
#define SUDO_USAGE_H

/*
 * Usage strings for sudo.  These are here because we
 * need to be able to substitute values from configure.
 */
#define SUDO_USAGE0 " -h | -V"
#define SUDO_USAGE1 " -h | -K | -k | -V"
#define SUDO_USAGE2 " -v [-ABkNnS] [-g group] [-h host] [-p prompt] [-u user]"
#define SUDO_USAGE3 " -l [-ABkNnS] [-g group] [-h host] [-p prompt] [-U user] [-u user] [command [arg ...]]"
#define SUDO_USAGE4 " [-ABbEHkNnPS] [-C num] [-D directory] [-g group] [-h host] [-p prompt] [-R directory] [-T timeout] [-u user] [VAR=value] [-i | -s] [command [arg ...]]"
#define SUDO_USAGE5 " -e [-ABkNnS] [-C num] [-D directory] [-g group] [-h host] [-p prompt] [-R directory] [-T timeout] [-u user] file ..."

/*
 * Configure script arguments used to build sudo.
 */
#define CONFIGURE_ARGS "--with-password-timeout=0 --disable-setreuid --with-env-editor --with-pam --with-libraries=bsm --with-noexec=no --sysconfdir=/private/etc --without-lecture --enable-static-sudoers --with-rundir=/var/db/sudo"

#endif /* SUDO_USAGE_H */
