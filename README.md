# ATmega8 Blink

This is a simple LED blink example for the ATmega8 microcontroller written in C using AVR-GCC.

## 💡 Description

- LED connected to **PB0** (pin 14 on DIP package)
- Toggles every 500ms using `_delay_ms`
- Built using `avr-gcc` and flashed via USBasp / Arduino ISP

## 🛠 Requirements

- ATmega8 (1 MHz or 8 MHz internal oscillator)
- AVR-GCC toolchain
- ISP programmer (USBasp, Arduino as ISP, etc.)

## 📁 Files

- `main.c` – C source code
- `README.md` – This file

## 🔌 Schematic

VCC ---[ 220Ω ]---|>|--- PB0


> Make sure your fuse bits are set correctly for internal oscillator or external clock if used.
