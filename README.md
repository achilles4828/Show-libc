  # Show-libc
  Build Commands :
  Standard build doesn't work >> something's up with the dlsym module.

  For 32-bit binary:
    gcc -m32 resolvelibc.c -Wl,--no-as-needed -ldl -o reslibc32

  For 64-bit binary:
    gcc resolvelibc.c -Wl,--no-as-needed -ldl -o reslibc64

