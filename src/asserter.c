/*
 * Copyright (c) 2018 Asserter. All rights reserved.
 *         Use is subject to license terms.
 *            See LICENSE for details.
 */

#include <asserter.h>

struct _asserter {
    char *descr;
    /* Note: the way is being worked out...
     *
     *    things to track assertions
     *
     */
    assertlog logger;
};

static asserter _ar;

void asserter_attach(/* params are subject to discuss */)
{
	/*
	 * Do: attach asserter
	 */
}

assertop asserter_log(assertop aop)
{
	return __assertlog_log__(_ar.logger, aop);
}

assertop asserter_mode_log(assertop aop)
{
	/*
	 * Do: execute mode log
	 */
	return aop;
}

void asserter_stats()
{
	/* 
	 * Do: print stats
	 */
}

void asserter_run(/* params are subject to discuss */)
{
	/*
	 * Do: run assertions
	 */
}

void asserter_run_ge(/* params are subject to discuss */)
{
	/*
	 * Do: run assertions from generator
	 */
}

void asserter_detach()
{
	/*
	 * Do: detach asserter
	 */
}

/***** Thread-Safe *****/

asserter *asserter_attach_r(/* params are subject to discuss */)
{
	/*
	 * Do: attach asserter
	 */
}

assertop asserter_log_r(asserter *ar, assertop aop)
{
	return __assertlog_log(ar, aop);
}

void asserter_stats_r(asserter *ar)
{
	/*
	 * Do: print stats
	 */
}

void asserter_run_r(/* params are subject to discuss */)
{
	/*
	 * Do: run assertions
	 */
}

void asserter_run_ge_r(/* params are subject to discuss */)
{
	/*
	 * Do: run assertions from generator
	 */
}

void asserter_detach_r(asserter *ar)
{
	/*
	 * Do: detach asserter
	 */
}
