/*
 * Copyright (c) 2019 Asserter. All rights reserved.
 *         Use is subject to license terms.
 *            See LICENSE for details.
 */

#ifndef _ASSERTION_CMP_H
#define _ASSERTION_CMP_H

#include <asserter.h>
#include <string.h>

extern assertop assert_char_cmp(char, char, ...);
extern assertop assert_shrt_cmp(short, short, ...);
extern assertop assert_int_cmp(int, int, ...);
extern assertop assert_long_cmp(long, long, ...);
extern assertop assert_llong_cmp(long long, long long, ...);
extern assertop assert_uchar_cmp(unsigned char, unsigned char, ...);
extern assertop assert_ushrt_cmp(unsigned short, unsigned short, ...);
extern assertop assert_uint_cmp(unsigned, unsigned, ...);
extern assertop assert_ulong_cmp(unsigned long, unsigned long, ...);
extern assertop assert_ullong_cmp(unsigned long long, unsigned long long, ...);
extern assertop assert_flt_cmp(float, float, float, float, ...);
extern assertop assert_dbl_cmp(double, double, double, double, ...);
extern assertop assert_str_cmp(const char *, const char *, ...);

extern assertop assert_char_skip_cmp(char, char, ...);
extern assertop assert_shrt_skip_cmp(short, short, ...);
extern assertop assert_int_skip_cmp(int, int, ...);
extern assertop assert_long_skip_cmp(long, long, ...);
extern assertop assert_llong_skip_cmp(long long, long long, ...);
extern assertop assert_uchar_skip_cmp(unsigned char, unsigned char, ...);
extern assertop assert_ushrt_skip_cmp(unsigned short, unsigned short, ...);
extern assertop assert_uint_skip_cmp(unsigned, unsigned, ...);
extern assertop assert_ulong_skip_cmp(unsigned long, unsigned long, ...);
extern assertop assert_ullong_skip_cmp(unsigned long long, unsigned long long, ...);
extern assertop assert_flt_skip_cmp(float, float, float, float, ...);
extern assertop assert_dbl_skip_cmp(double, double, double, double, ...);
extern assertop assert_str_skip_cmp(const char *, const char *, ...);

/***** Thread-Safe *****/

extern assertop assert_char_cmp_r(asserter *, char, char, ...);
extern assertop assert_shrt_cmp_r(asserter *, short, short, ...);
extern assertop assert_int_cmp_r(asserter *, int, int, ...);
extern assertop assert_long_cmp_r(asserter *, long, long, ...);
extern assertop assert_llong_cmp_r(asserter *, long long, long long, ...);
extern assertop assert_uchar_cmp_r(asserter *, unsigned char, unsigned char, ...);
extern assertop assert_ushrt_cmp_r(asserter *, unsigned short, unsigned short, ...);
extern assertop assert_uint_cmp_r(asserter *, unsigned, unsigned, ...);
extern assertop assert_ulong_cmp_r(asserter *, unsigned long, unsigned long, ...);
extern assertop assert_ullong_cmp_r(asserter *, unsigned long long, unsigned long long, ...);
extern assertop assert_flt_cmp_r(asserter *, float, float, float, float, ...);
extern assertop assert_dbl_cmp_r(asserter *, double, double, double, double, ...);
extern assertop assert_str_cmp_r(asserter *, const char *, const char *, ...);

extern assertop assert_char_skip_cmp_r(asserter *, char, char, ...);
extern assertop assert_shrt_skip_cmp_r(asserter *, short, short, ...);
extern assertop assert_int_skip_cmp_r(asserter *, int, int, ...);
extern assertop assert_long_skip_cmp_r(asserter *, long, long, ...);
extern assertop assert_llong_skip_cmp_r(asserter *, long long, long long, ...);
extern assertop assert_uchar_skip_cmp_r(asserter *, unsigned char, unsigned char, ...);
extern assertop assert_ushrt_skip_cmp_r(asserter *, unsigned short, unsigned short, ...);
extern assertop assert_uint_skip_cmp_r(asserter *, unsigned, unsigned, ...);
extern assertop assert_ulong_skip_cmp_r(asserter *, unsigned long, unsigned long, ...);
extern assertop assert_ullong_skip_cmp_r(asserter *, unsigned long long, unsigned long long, ...);
extern assertop assert_flt_skip_cmp_r(asserter *, float, float, float, float, ...);
extern assertop assert_dbl_skip_cmp_r(asserter *, double, double, double, double, ...);
extern assertop assert_str_skip_cmp_r(asserter *, const char *, const char *, ...);

#endif 	/*_ASSERTION_CMP_H */
