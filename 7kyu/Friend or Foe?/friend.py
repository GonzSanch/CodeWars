#! /usr/bin/env python3

def friend(x):
    list = []
    for friend in x:
        if len(friend) == 4:
            list.append(friend)
    return list
