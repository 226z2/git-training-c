/**
 ******************************************************************************
 * @file    training_core.c
 * @author  Git Training
 * @version V1.0.0
 * @date    2026-05-19
 * @brief   Git training core implementation.
 ******************************************************************************
 * @attention
 *
 ******************************************************************************
 */

#include "training_core.h"

#define TRAINING_CORE_SAMPLE_SCORE 120

int training_core_clamp_score(int score)
{
    if (score < 0) {
        return 0;
    }

    if (score > 100) {
        return 100;
    }

    return score;
}

int training_core_get_info(TrainingCoreInfo *info)
{
    if (info == 0) {
        return -1;
    }

    info->version_major = TRAINING_CORE_VER_MAJOR;
    info->version_minor = TRAINING_CORE_VER_MINOR;
    info->version_patch = TRAINING_CORE_VER_PATCH;
    info->sample_score = TRAINING_CORE_SAMPLE_SCORE;
    info->clamped_score = training_core_clamp_score(TRAINING_CORE_SAMPLE_SCORE);

    return 0;
}
