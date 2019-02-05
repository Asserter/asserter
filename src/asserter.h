/*
 * Copyright (c) 2018 Asserter. All rights reserved.
 *         Use is subject to license terms.
 *            See LICENSE for details.
 */

#ifndef _ASSERTER_H
#define _ASSERTER_H

#include <assertlog.h>

extern struct _asserter;
typedef struct _asserter asserter;

void asserter_attach(/* params are subject to discuss */);
assertop asserter_log(assertop aop);
assertop asserter_mode_log(assertop aop);
void asserter_stats();
void asserter_run(/* params are subject to discuss */);
void asserter_run_ge(/* params are subject to discuss */);
void asserter_detach();

/***** Thread-Safe *****/

asserter *asserter_attach_r(/* params are subject to discuss */);
assertop asserter_log_r(asserter *ar, assertop aop);
assertop asserter_mode_log_r(asserter *ar, assertop aop);
void asserter_stats_r(const asserter *ar);
void asserter_run_r(/* params are subject to discuss */);
void asserter_run_ge_r(/* params are subject to discuss */);
void asserter_detach_r(asserter *ar);

#endif 	/* _ASSERTER_H */
