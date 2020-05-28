#!/bin/bash

function removeChar() {
  echo ${1:1:-1}
}

removeChar $1
