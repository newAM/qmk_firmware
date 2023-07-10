# Notes

Building:

```bash
qmk compile -kb newam -km default -j0
```

Flashing, connect the RHS of R9 (SPI chip select) to GND while plugging in to enter U2F bootloader.

```bash
qmk flash -kb newam -km default -j0 -bl uf2-split-right
```
