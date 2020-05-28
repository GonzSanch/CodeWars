#! /usr/bin/env python3

def unique_in_order(iterable):
  index = 1
  new_list = []
  if len(iterable) == 0:
      return new_list
  new_list.append(iterable[0])
  while index < len(iterable):
    if (iterable[index] != new_list[len(new_list) - 1]):
      new_list.append(iterable[index])
    index += 1
  return new_list
