#! /usr/bin/env python3

def check(seq, elem):
    for x in seq:
      if x is elem:
        return True
    return False
