# mynewos
Building the OS requires some commands.

Build: docker build buildenv -t myos-buildenv
# Recommended - Windows (CMD PROMPT)
docker run --rm -it -v %cd%:/root/env myos-buildenv

# to run the os
qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso

#if doesnt work, add to path, and restart vscode and run again.
