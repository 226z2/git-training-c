# Pull Request Review 规则

Review 时优先检查以下问题：

1. 是否只新增了自己的 `students/student_<学号>.c`。
2. 分支名是否符合 `student/<学号>/task01`。
3. commit message 是否清楚。
4. PR 描述和自查清单是否完整。
5. 是否提交了编译产物、压缩包或敏感文件。
6. C 代码是否有明显语法错误或破坏仓库结构。
7. 函数名、文件名和学号是否一致。
8. 如学生声明完成加分项，再检查 CMake 构建和 submodule 是否正确。

## AI 评分提示词

```text
请审查这个 Pull Request，并按以下维度评分：

1. Git 流程是否规范；
2. 分支命名是否符合 student/<学号>/task01；
3. commit message 是否清楚；
4. 是否存在无关文件、压缩包、编译产物或敏感文件；
5. C 代码是否有明显语法错误或代码质量问题；
6. PR 描述是否完整；
7. 如果学生声明完成 CMake 或 submodule bonus，请检查构建和 submodule 是否正确使用。

请输出：
- 总分；
- 每项得分；
- 主要问题；
- 修改建议；
- 是否建议合并。
```
