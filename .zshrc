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

swapname() {
    ( EXEC="$(mktemp)" && gcc -x c - -o "$EXEC" && "$EXEC" "$@"; rm "$EXEC" ) <<"CODE" 
    #include <unistd.h>
    #include <fcntl.h> 
    #include <stdio.h>
    #include <sys/syscall.h>
    
    // Ubuntu 18.04 does not define RENAME_EXCHANGE
    // Value obtained manually from '/usr/include/linux/fs.h'
    // You should switch to RENAME_EXCHANGE on modern systems
    // Just remove the following line, then remove the `local_`
    // prefix where it appears later in this function.
    int local_RENAME_EXCHANGE = (1 << 1);
    
    int main(int argc, char **argv) {
        if (argc != 3) { 
            fprintf(stderr, "Error: Could not swap names. Usage: %s PATH1 PATH2\n", argv[0]);
            return 2; 
        }
        int r = syscall(
            SYS_renameat2,
            AT_FDCWD, argv[1],
            AT_FDCWD, argv[2], 
            local_RENAME_EXCHANGE
        );
        if (r < 0) {
            perror("Error: Could not swap names");
            return 1;
        }
        else return 0;
    }
CODE
} 


GPG_TTY=$(tty)
export GPG_TTY

eval "$(starship init zsh)"
eval "$(zoxide init zsh)"

[ -f "/Users/azaleacolburn/.ghcup/env" ] && . "/Users/azaleacolburn/.ghcup/env" # ghcup-env
