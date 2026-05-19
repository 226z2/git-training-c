# git-training-c

`git-training-c` is a small C project for practicing the standard GitHub
collaboration workflow:

```text
Fork -> Clone -> Branch -> Modify -> Commit -> Push -> Pull Request -> Review -> Merge
```

The C code is intentionally simple. The required goal is to submit a clean,
reviewable Pull Request through the correct GitHub workflow.

## Student Task

Read [tasks/task01.md](tasks/task01.md), then add one file under `students/`:

```text
students/student_<your_id>.c
```

Do not modify other students' files.

## Optional Bonus: Local Build

Students have not been taught CMake yet, so local CMake usage is a bonus task,
not a required task.

```bash
cmake -S . -B build -G Ninja
cmake --build build
```

Run on Windows PowerShell:

```powershell
.\build\git_training_basic.exe
```

Run on Linux or macOS:

```bash
./build/git_training_basic
```

## Optional Bonus: Submodule

This repository uses `git-training-tinycalc` as a bonus submodule dependency.
Initializing the submodule and building the bonus target are optional.

```bash
git submodule update --init --recursive
cmake -S . -B build -G Ninja -DENABLE_SUBREPO_BONUS=ON
cmake --build build
```

Read [tasks/bonus_submodule.md](tasks/bonus_submodule.md) for details.
