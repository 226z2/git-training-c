# Bonus：CMake 构建与子仓库

本任务为加分项，不强制完成。没有学过 CMake 或 submodule 的同学可以先跳过。

## 任务要求

在主仓库中执行：

```bash
git submodule update --init --recursive
```

然后使用 CMake 重新构建：

```bash
cmake -S . -B build -G Ninja -DENABLE_SUBREPO_BONUS=ON
cmake --build build
```

如果编译成功，运行：

```bash
./build/git_training_bonus
```

Windows PowerShell 中运行：

```powershell
.\build\git_training_bonus.exe
```

并在 PR 描述中附上运行结果。

## 加分点

完成本任务说明你已经初步理解：

- 如何用 CMake 配置和构建一个 C 工程；
- 什么是 Git submodule；
- 为什么主仓库里只记录子仓库的某个 commit；
- 为什么 clone 仓库后还需要初始化 submodule；
- 子仓库和普通文件夹的区别。
