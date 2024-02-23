find . -type f -name UserVariables.inc -print0 | xargs -0 git update-index --skip-worktree
