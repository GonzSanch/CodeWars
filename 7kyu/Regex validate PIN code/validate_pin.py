#! /usr/bin/env python3

def validate_pin(pin):
    return True if (len(pin) == 4 or len(pin) == 6) and pin.isdigit() else False
