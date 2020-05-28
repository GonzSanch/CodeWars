package kata

import (
	"strings"
	"strconv"
  )

  func IsValidCoordinates(coordinates string) bool {

	if strings.Contains(coordinates, "- "){
	  return false}
	splited := strings.Split(coordinates, ",")
	if len(splited) != 2 {
	  return false}
	splited[1] = splited[1][1:]
	for i, n := range splited {
	  if strings.ContainsAny(n , "Ee") {
		return false}
	  f, err := strconv.ParseFloat(n, 64)
	  if err != nil {
		return false}
	  if (i == 0 && (f > 90 || f < -90)) || (i == 1 && (f > 180 || f < -180)) {
		return false}}
	return true
  }
