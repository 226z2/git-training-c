/**
 ******************************************************************************
 * @file    bonus_main.c
 * @author  Git Training
 * @version V1.0.0
 * @date    2026-05-19
 * @brief   Submodule bonus executable entry point.
 ******************************************************************************
 * @attention
 *
 ******************************************************************************
 */

#include "tinycalc.h"

#include <stdio.h>

int main(void)
{
    const unsigned char data[] = {1U, 2U, 3U, 4U, 5U};

    printf("git_training_bonus\n");
    printf("tinycalc_add(20, 22) = %d\n", tinycalc_add(20, 22));
    printf("tinycalc_clamp(120, 0, 100) = %d\n", tinycalc_clamp(120, 0, 100));
    printf("tinycalc_checksum_u8(data, 5) = %u\n", tinycalc_checksum_u8(data, 5));

    return 0;
}
