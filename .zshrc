export BUN_INSTALL="$HOME/.bun"
export PATH="$BUN_INSTALL/bin:$PATH"

# File System Aliases
alias ll="eza -a -l"
alias th="z"
alias nd="mkdir"

# Git Aliases
alias c="git commit -a"
alias push="git push"
alias pull="git pull"
alias fetch="git fetch"
alias checkout="git checkout"

# Neovim Aliases
alias e="nvim"

GPG_TTY=$(tty)
export GPG_TTY

eval "$(starship init zsh)"
eval "$(zoxide init zsh)"

[ -f "/Users/azaleacolburn/.ghcup/env" ] && . "/Users/azaleacolburn/.ghcup/env" # ghcup-env
