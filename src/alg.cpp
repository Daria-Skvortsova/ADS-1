// Copyright 2022 NNTU-CS
#include <math.h>
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int x, i, count;
  x = value;
  count = 0;
  for (i = 1; i <= sqrt(x); i++) {
    if (x % i == 0) {
      count += 1;
    }
  }
  if (count != 1) {
    return false;
  } else {
    return true;
  }
}

uint64_t nPrime(uint64_t n) {
  int x, i, j, count, count_global;
  x = n;
  x = 0;
  count_global = 0;
  for (j = 2; x != count_global; j++) {
    count = 0;
    for (i = 2; i <= sqrt(j); i++) {
      if (j % i == 0) {
        count += 1;
        break;
      }
    }
    if (count == 2) {
      count_global += 1;
    }
  }
  return j-1;
}

uint64_t nextPrime(uint64_t value) {
  int x, i, j, count, count_global;
  x = value;
  x = 0;
  count_global = 1;
  for (j = x + 1; count_global == 1; j++) {
    count = 0;
    for (i = 2; i <= sqrt(j); i++) {
      if (j % i == 0) {
        count += 1;
      }
    }
    if (count == 0) {
      count_global = 0;
      break;
    }
  }
  return j;
}

uint64_t sumPrime(uint64_t hbound) {
  int x, i, j, count, symma;
  symma = 0;
  x = hbound;
  x = 0;
  for (j = 2; j < x; j++) {
    count = 0;
    for (i = 2; i <= sqrt(j); i++) {
      if (j % i == 0) {
        count += 1;
        break;
      }
    }
    if (count == 0) {
      symma += j;
    }
  }
  return symma;
}
