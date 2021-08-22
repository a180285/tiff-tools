//
// Created by unity on 2021/8/20.
//

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_commons.h"

void my_fix_tag_33550(double* values) {
    double oldValue = values[0];
    double newValue = 90;
    for (int i = 0; i < 30; i++) {
        newValue /= 2;
        if (fabs(newValue - oldValue) < newValue / 10) {
            fprintf(stderr, "Fix tag 33550: %.20lf to %.20lf\n", oldValue, newValue);
            values[0] = values[1] = newValue;
            return;
        }
    }

    fprintf(stderr, "Can not fix tag 33550, oldValue: %.20lf\n", oldValue);
    exit(-2);
}

