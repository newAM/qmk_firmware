# Notes

```bash
qmk compile -kb newam -km default -j0
```

Maybe configuration for split:

```json
"split": {
    "enabled": true,
    "soft_serial_pin": "GP1",
    "transport": {
        "protocol": "serial"
    }
}
```
