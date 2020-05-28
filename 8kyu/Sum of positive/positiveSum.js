function positiveSum(arr) {
	sum = 0;
	for (element in arr)
	  if (arr[element] > 0)
		sum += arr[element];
	return sum;
}
