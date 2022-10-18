# mynewos
Building the OS requires some commands.
Recommended - Windows (CMD PROMPT): docker run --rm -it -v %cd%:/root/env myos-buildenv
to run the os use: qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso

if doesnt work, add to path, and restart vscode and run again.
