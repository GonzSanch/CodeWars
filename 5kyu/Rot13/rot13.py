#! /usr/bin/env python3

def rot13(message):
    def lookup(v):
        o, c = ord(v), v.lower()
        if 'a' <= c <= 'm':
            return chr(o + 13)
        if 'n' <= c <= 'z':
            return chr(o - 13)
        return v
    return ''.join(map(lookup, message))
