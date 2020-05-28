#! /usr/bin/env python3

def filter_list(l):
    newlist = [value for value in l if type(value) == int]
    return newlist
