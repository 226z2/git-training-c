/**
 ******************************************************************************
 * @file    student_9999999999.c
 * @author  Test Student
 * @version V1.0.0
 * @date    2026-05-19
 * @brief   Student task01 implementation for PR workflow testing.
 ******************************************************************************
 * @attention
 *
 * This file is used to test the GitHub Pull Request training workflow.
 *
 ******************************************************************************
 */

#include <stddef.h>

const char *student_9999999999_id(void)
{
    return "9999999999";
}

const char *student_9999999999_name(void)
{
    return "Test Student";
}

int student_9999999999_clamp_score(int score)
{
    if (score < 0) {
        return 0;
    }

    if (score > 100) {
        return 100;
    }

    return score;
}
