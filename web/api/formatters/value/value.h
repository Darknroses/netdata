// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef NETDATA_API_FORMATTER_VALUE_H
#define NETDATA_API_FORMATTER_VALUE_H

#include "../rrd2json.h"

NETDATA_DOUBLE rrdr2value(RRDR *r, long i, RRDR_OPTIONS options, int *all_values_are_null, NETDATA_DOUBLE *anomaly_rate, RRDDIM *temp_rd);

#endif //NETDATA_API_FORMATTER_VALUE_H
