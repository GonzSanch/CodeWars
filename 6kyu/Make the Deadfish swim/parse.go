package kata

func Parse(data string) []int{
  var num = 0
  var result []int = []int{}
  for _, c := range data {
    switch c {
      case 'i':
        num++
      case 'd':
        num--
      case 's':
        num *= num
      case 'o':
        result = append(result, num)}}
  return result
}
