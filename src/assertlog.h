/*
 * Copyright (c) 2018 Asserter. All rights reserved.
 *         Use is subject to license terms.
 *            See LICENSE for details.
 */

#ifndef _ASSERTLOG_H
#define _ASSERTLOG_H

#include <assertdef.h>

extern size_t assertlog_set(size_t);
extern assertop assertlog_log(assertop);

/***** Thread-Safe *****/

extern size_t assertlog_set_r(assertlog, size_t);
extern assertop assertlog_log_r(assertlog, assertop);

#endif 	/* _ASSERTLOG_H */
