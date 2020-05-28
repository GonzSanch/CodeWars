int sum(int* numbers, int numbersCount){
  int max=numbers[0], min=numbers[0], sum=numbers[0];
  if (numbersCount < 2) return 0;
  for(int i = 1; i < numbersCount; i++){
  sum += numbers[i];
  if(max < numbers[i]) max = numbers[i];
  if(min > numbers[i]) min = numbers[i];
  }

  return sum - min - max;
}
