package kata

func RepeatStr(repetitions int, value string) string {
  var newvalue = ""
  for repetitions != 0 {
    newvalue += value
    repetitions-- }
  return newvalue
}
