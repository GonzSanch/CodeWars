function validatePIN (pin) {
	if (pin.length != 4 && pin.length != 6)
	  return false;
	if (pin.match(/^[0-9]+$/))
	  return true;
	return false;
  }
