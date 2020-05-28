package kata

func SquareSum(numbers []int) int {
    var result int = 0
    for i:= range numbers {
      result += numbers[i]*numbers[i]
    }
    return result
}
