# C 代码风格

本训练仓库采用接近嵌入式 C 工程的朴素风格：

- 文件开头保留简短 Doxygen 文件头；
- `#include` 按本地头文件、第三方头文件、标准头文件分组；
- 函数左花括号另起一行；
- `if`、`for`、`while` 使用花括号；
- 缩进使用 4 个空格；
- 函数命名清楚，不使用拼音缩写或无意义名称；
- 尽量不提交明显无法编译的 C 文件；本轮不强制要求学生本地会 CMake。

示例：

```c
int student_2024123456_clamp_score(int score)
{
    if (score < 0) {
        return 0;
    }

    if (score > 100) {
        return 100;
    }

    return score;
}
```
