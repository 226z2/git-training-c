/**
 ******************************************************************************
 * @file    training_core.h
 * @author  Git Training
 * @version V1.0.0
 * @date    2026-05-19
 * @brief   Git training core public interface.
 ******************************************************************************
 * @attention
 *
 ******************************************************************************
 */

#ifndef TRAINING_CORE_H
#define TRAINING_CORE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 ******************************************************************************
 * Public macro definitions
 ******************************************************************************
 */
#define TRAINING_CORE_VER_MAJOR 1U
#define TRAINING_CORE_VER_MINOR 0U
#define TRAINING_CORE_VER_PATCH 0U

/**
 ******************************************************************************
 * Public type definitions
 ******************************************************************************
 */
typedef struct
{
    unsigned int version_major;
    unsigned int version_minor;
    unsigned int version_patch;
    int sample_score;
    int clamped_score;
} TrainingCoreInfo;

/**
 ******************************************************************************
 * Public function declarations
 ******************************************************************************
 */
int training_core_clamp_score(int score);
int training_core_get_info(TrainingCoreInfo *info);

#ifdef __cplusplus
}
#endif

#endif /* TRAINING_CORE_H */
