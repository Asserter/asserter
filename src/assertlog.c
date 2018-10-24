/*
 * Copyright (c) 2018 Asserter. All rights reserved.
 *         Use is subject to license terms.
 *            See LICENSE for details.
 */

#include <assertlog.h>

static assertlog _logger;

size_t assertlog_set(size_t nlog)
{
	return __assertlog_set__(_logger, nlog);
}

assertop assertlog_log(assertop aop)
{
	return __assertlog_log__(_logger, aop);
}

/***** Thread-Safe *****/

size_t assertlog_set_r(assertlog *logger, size_t nlog)
{
	return __assertlog_set(logger, nlog);
}

assertop assertlog_log_r(assertlog logger, assertop aop)
{
	return __assertlog_log(logger, aop);
}
