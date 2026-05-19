/**
 ******************************************************************************
 * @file    main.c
 * @author  Git Training
 * @version V1.0.0
 * @date    2026-05-19
 * @brief   Basic executable entry point.
 ******************************************************************************
 * @attention
 *
 ******************************************************************************
 */

#include "training_core.h"

#include <stdio.h>

int main(void)
{
    TrainingCoreInfo info;

    if (training_core_get_info(&info) != 0) {
        puts("git_training_basic: failed to read training core info");
        return 1;
    }

    printf("git_training_basic\n");
    printf("version: %u.%u.%u\n",
           info.version_major,
           info.version_minor,
           info.version_patch);
    printf("sample score: %d\n", info.sample_score);
    printf("clamped score: %d\n", info.clamped_score);
    printf("student sources are compiled through CMake glob students/*.c\n");

    return 0;
}
