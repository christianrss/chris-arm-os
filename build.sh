aarch64-linux-gnu-gcc -c boot/boot.s -o build/boot.o
aarch64-linux-gnu-gcc -std=c99 -ffreestanding -mgeneral-regs-only -c boot/main.c -o build/main.o
aarch64-linux-gnu-ld -nostdlib -T boot/link.lds -o build/kernel build/boot.o build/main.o
aarch64-linux-gnu-objcopy -O binary build/kernel build/kernel8.img