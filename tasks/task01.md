# Task 01：完成第一次标准 GitHub 协作提交

## 任务目标

请完成一次完整的 GitHub 协作流程：

1. Fork 本仓库；
2. Clone 自己的 Fork 仓库到本地；
3. 按照学号创建分支；
4. 在 `students/` 目录下新增自己的 C 文件；
5. 提交 commit；
6. Push 到自己的 Fork 仓库；
7. 向原教学仓库发起 Pull Request。

本任务的必做部分不要求会 CMake，也不要求本地编译通过。能自己使用
CMake 构建、运行程序、拉取 submodule 的同学可以在 PR 中说明，作为加分项。

## 分支命名要求

请按照如下格式创建分支：

```text
student/<学号>/task01
```

例如：

```bash
git switch -c student/2024123456/task01
```

## 文件命名要求

请复制：

```text
students/student_template.c.txt
```

并改名为：

```text
students/student_<学号>.c
```

例如：

```text
students/student_2024123456.c
```

## 函数命名要求

请把模板里的 `2024123456` 全部替换成自己的学号。

## 提交信息要求

commit message 建议格式：

```text
feat: add task01 implementation for <学号>
```

不要写：

```text
更新
修改
作业
最终版
不知道能不能用
```

## PR 标题要求

Pull Request 标题格式：

```text
task01: <学号> <姓名>
```

## 加分项：本地构建

如果你已经会使用 CMake，可以尝试本地构建。不会 CMake 不影响完成本次
基础任务。

```bash
cmake -S . -B build -G Ninja
cmake --build build
```

PowerShell 运行：

```powershell
.\build\git_training_basic.exe
```
