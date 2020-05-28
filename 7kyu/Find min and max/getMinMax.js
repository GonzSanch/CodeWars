function getMinMax(arr){
	var result = [];
	result.push(Math.min.apply(null, arr));
	result.push(Math.max.apply(null, arr));
	return result;
  };
