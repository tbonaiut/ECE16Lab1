

int detectGesture() {
  if((ax >= 1900 && ax <= 2050) && (ay >= 1900 && ay <= 2050)) {
    if((az >= 2450) && (az <= 2550)) {
      return 0;
    }
    else if((az <= 1700) && (az >= 1600)) {
      return 1;
    }
  } 
  return 2;
}
