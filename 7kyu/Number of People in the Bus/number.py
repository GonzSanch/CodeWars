#! /usr/bin/env python3

def number(bus_stops):
    res = 0
    for i in bus_stops:
        res += i[0]
        res -= i[1]
    return res
